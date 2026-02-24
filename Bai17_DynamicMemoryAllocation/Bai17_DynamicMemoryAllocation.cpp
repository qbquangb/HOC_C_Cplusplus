#include <iostream>
#include <new>      // std::nothrow
using namespace std;

void raw_example() {
    cout << "--- raw allocation example ---\n";

    // cấp phát 1 số
    int* p = new int(10);
    cout << "p points to value: " << *p << "\n";
    delete p; // Hệ điều hành lấy lại bộ nhớ
    p = nullptr; // P là con trỏ nullptr

    // cấp phát mảng
    int* arr = new int[3] {1, 2, 3};
    cout << "arr[0] = " << arr[0] << "\n";
    cout << "arr[1] = " << arr[1] << "\n";
    cout << "arr[2] = " << arr[2] << "\n";
    delete[] arr;
    arr = nullptr;

    // cấp phát an toàn với nothrow
    int* big = new(nothrow) int[100000000000ULL];
    if (!big) {
        cout << "Allocation failed (nothrow) — big is nullptr\n";
    }
    else {
        delete[] big;
    }
    big = nullptr;

    // Sử dụng try ... catch
    int* big2 = nullptr;
    try {
        big2 = new int[100000000000ULL];
    }
    catch (const std::bad_alloc& e) {
        std::cerr << "Allocation failed: " << e.what() << '\n';
        if (big2 == nullptr) { cout << "big2 is nullptr\n"; }
        else { cout << "big2 is not nullptr\n"; }
    }
    delete[] big2;
    big2 = nullptr;

}

int main() {
    raw_example();
    cout << "Program finished\n";
    return 0;
}