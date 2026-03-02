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

    const char* path = "students.txt"; // con trỏ hằng char, không thể thay đổi nội dung qua con trỏ

    string students2 = "students2.txt";
    string* const path2 = &students2; // Hằng con trỏ, không thể thay đổi giá trị của path2

    string students3 = "students3.txt";
    const string* const path3 = &students3; // Hằng con trỏ hằng, không thể thay đổi nội dung qua con trỏ, 
                                                               // không thể thay đổi giá trị của path3

#if 0
    {
        // Ghi văn bản
        cout << "-------------------------------------------------------------\n";

        std::ofstream ofs(path);
        if (!ofs) { std::cerr << "Cannot open students.txt for write\n"; return 1; }
        ofs << "An 20\n";
        ofs << "hht 21\n";
        ofs.flush(); // đẩy buffer xuống disk nếu cần
        ofs.close();
        cout << "Đã ghi xong." << endl;

        cout << "-------------------------------------------------------------\n";
    }
#endif

#if 1
    {
        // Ghi văn bản append
        // Mở ở chế độ append (nếu file chưa có sẽ tạo mới)
        std::ofstream ofs(path, std::ios::out | std::ios::app);
        if (!ofs.is_open()) {
            std::cerr << "Cannot open file for append\n";
            return 1;
        }

        ofs << "New log entry\n";   // luôn ghi vào cuối file
        ofs << "Another line\n";
        ofs.flush(); // tuỳ chọn: đẩy buffer xuống disk ngay nếu cần

        // Đóng file (hoặc tự đóng trong destructor)
        ofs.close();
        cout << "Đã ghi xong." << endl;
    }
#endif

    system("pause");

    return 0;

}