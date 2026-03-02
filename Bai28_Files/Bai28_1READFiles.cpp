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
using namespace std;

int main() {

    {
        // Đọc theo token (>>): tách theo whitespace (space, tab, newline)
        cout << "-------------------------------------------------------------\n";

        std::ifstream ifs("input.txt");

        if (!ifs.is_open()) { std::cerr << "Cannot open file\n"; return 1; }

        std::string word;
        long long count = 0;
        while (ifs >> word) {
            ++count;
            std::cout << "Word " << count << ": [" << word << "]\n";
        }

        if (ifs.eof()) std::cout << "Đọc xong (EOF)\n";
        else if (ifs.fail()) std::cout << "Dừng do lỗi I/O/format\n";

        std::cout << "Tổng worlds = " << count << '\n';
        ifs.close(); // Tự động đóng hoặc đóng thủ công

        cout << "-------------------------------------------------------------\n";
    }

    {
        // Đọc theo dòng (std::getline)
        cout << "-------------------------------------------------------------\n";

        std::ifstream ifs("input.txt");

        if (!ifs.is_open()) { std::cerr << "Cannot open file\n"; return 1; }

        std::string line;
        long long count = 0;
        while (std::getline(ifs, line)) {
            ++count;
            std::cout << "line " << count << ": [" << line << "]\n";
        }

        if (ifs.eof()) std::cout << "Đọc xong (EOF)\n";
        else if (ifs.fail()) std::cout << "Dừng do lỗi I/O/format\n";

        std::cout << "Tổng lines = " << count << '\n';

        cout << "-------------------------------------------------------------\n";
    }

    {
        // Đọc toàn bộ file vào string
        cout << "-------------------------------------------------------------\n";

        std::ifstream ifs("input.txt");

        if (!ifs.is_open()) { std::cerr << "Cannot open file\n"; return 1; }

        std::ostringstream ss;
        ss << ifs.rdbuf();
        std::string res = ss.str();

        cout << res;

        cout << "-------------------------------------------------------------\n";
    }

    system("pause");

    return 0;

}