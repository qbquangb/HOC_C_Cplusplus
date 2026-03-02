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

    const char* prog = "Bai28_5COPYBINFiles.exe";

    if (argc != 3) { std::cerr << "Usage: copy src dst\n"; return 1; }
    std::ifstream src(argv[1], std::ios::binary);
    std::ofstream dst(argv[2], std::ios::binary | std::ios::trunc);
    if (!src || !dst) { std::cerr << "File error\n"; return 2; }
    constexpr std::size_t BUF = 1 << 20;
    std::vector<char> buffer(BUF);
    while (src) {
        src.read(buffer.data(), buffer.size());
        std::streamsize s = src.gcount();
        if (s > 0) dst.write(buffer.data(), s);
    }
    src.close();
    dst.close();
    cout << "Đã copy xong" << endl;

    system("pause");

    return 0;

}
