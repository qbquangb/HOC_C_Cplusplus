/*
#include <fstream> — chứa std::ifstream (input file stream), std::ofstream (output file stream), std::fstream (input+output).
*/
#include <fstream>
/*
#include <sstream> — hỗ trợ đọc/ghi qua chuỗi, tiện khi đọc toàn bộ file vào std::string.
*/
#include <sstream>
/*
#include <filesystem> (C++17) — thao tác với đường dẫn, kiểm tra tồn tại, kích thước file.
*/
#include <filesystem>
#include <iostream>
#include <string>
#include <iomanip>
#include <vector>
#include <cctype>
#include <cstdint>
using namespace std;

int main(int argc, char* argv[]) {

    const char* prog = "read_binary.exe";
    // Đọc files nhị phân
    if (argc != 3) {
        std::cerr << "Usage: " << prog << " <file_name>" << " <double_number>" << endl;
        return 1;
    }

    cout << "--------------------------------------------------------------------" << endl;

    try {
        std::string s = argv[2];
        // std::stod(s), string to double, chuyển string to double
        // std::stoi(s), string to int, chuyển string to int
        // ném std::invalid_argument hoặc std::out_of_range nếu lỗi
        double value = std::stod(s);
        std::cout << "Bạn đã truyền số: " << value << '\n';
    }
    catch (const std::invalid_argument&) {
        std::cerr << "Lỗi: '" << argv[2] << "' không phải một số doube hợp lệ.\n";
        return 2;
    }
    catch (const std::out_of_range&) {
        std::cerr << "Lỗi: giá trị quá lớn/nhỏ để chứa trong kiểu double.\n";
        return 3;
    }

    cout << "--------------------------------------------------------------------" << endl;

    const char* filename = argv[1];
    std::ifstream ifs(filename, std::ios::binary);
    if (!ifs) {
        std::cerr << "Error: cannot open file '" << filename << "' for reading\n";
        return 4;
    }

    // kiểu dữ liệu std::size_t là kiểu nguyên không dấu, phụ thuộc vào x86/x64, trên x64 là 8bytes
    const std::size_t bytes_per_line = 16; // Mỗi hàng 16 bytes
    std::vector<unsigned char> buf(bytes_per_line);
    std::uint64_t offset = 0;

    if (buf.size() > static_cast<std::size_t>(std::numeric_limits<std::streamsize>::max()))
        throw std::runtime_error("buffer too big");

    while (ifs) {
        ifs.read(reinterpret_cast<char*>(buf.data()), static_cast<std::streamsize>(buf.size()));
        std::streamsize n = ifs.gcount();
        if (n <= 0) break;

        // print offset (8 hex digits)
        std::cout << std::hex << std::setw(8) << std::setfill('0') << offset << ": ";

        // print hex bytes
        for (std::size_t i = 0; i < bytes_per_line; ++i) {
            if (static_cast<std::streamsize>(i) < n) {
                // cast to int to avoid printing as char, mask 0xFF to be safe
                std::cout << std::setw(2) << std::setfill('0')
                    << static_cast<int>(buf[i] & 0xFF) << ' ';
            }
            else {
                // padding for short final line
                std::cout << "   ";
            }
        }

        // print ASCII view
        std::cout << " |";
        for (std::streamsize i = 0; i < n; ++i) {
            unsigned char c = buf[static_cast<std::size_t>(i)];
            // printable ASCII range: use isprint on unsigned char
            if (std::isprint(c))
                std::cout << static_cast<char>(c);
            else
                std::cout << '.';
        }
        std::cout << "|\n";

        offset += static_cast<std::uint64_t>(n);

        // restore formatting to decimal default for next offset
        std::cout << std::dec << std::setfill(' ');
    }

    system("pause");

    return 0;

}
