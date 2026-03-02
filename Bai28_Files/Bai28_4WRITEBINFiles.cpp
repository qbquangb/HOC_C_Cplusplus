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

int main(int argc, char** argv) {

    const char* prog = "Bai28_4WRITEBINFiles.exe";
    // ghi files nhị phân
    if (argc != 2) {
        std::cerr << "Usage: " << prog << " <file_name>" << "\n"
            << "Example: " << prog << " out.bin" << endl;
        return 1;
    }

    const char* filename = argv[1];
    std::ofstream ofs(filename, std::ios::binary | std::ios::trunc); // tạo mới nếu ko tồn tại, xóa ndung cũ nếu tồn tại
    if (!ofs) {
        std::cerr << "Cannot open " << filename << " for writing\n";
        return 1;
    }

    // Ví dụ buffer: 0x00, 0xFF, 0x41 ('A')
    std::vector<unsigned char> buf = { 0x00, 0xFF, 0x41 };

    // Ghi buffer: cần cast sang const char*
    ofs.write(reinterpret_cast<const char*>(buf.data()),
        static_cast<std::streamsize>(buf.size()));
    if (!ofs) {
        std::cerr << "Write failed\n";
        return 2;
    }

    ofs.close();

    cout << "Đã ghi xong" << endl;

    // ghi bin app
    std::ofstream ofs2(filename, std::ios::binary | std::ios::app);

    if (!ofs2) {
        std::cerr << "Cannot open " << filename << " for app writing\n";
        return 3;
    }

    // Ví dụ buffer: 0xFF, 0x41 ('A')
    std::vector<unsigned char> buf2 = { 0xFF, 0x41 };

    // Ghi buffer: cần cast sang const char*
    ofs2.write(reinterpret_cast<const char*>(buf2.data()),
        static_cast<std::streamsize>(buf2.size()));
    if (!ofs2) {
        std::cerr << "Write app failed\n";
        return 4;
    }

    ofs2.close();

    cout << "Đã ghi app xong" << endl;

    system("pause");

    return 0;

}
