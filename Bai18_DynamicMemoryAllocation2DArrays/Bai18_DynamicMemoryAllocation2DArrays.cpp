#include <iostream>

int main() {
    int rows = 3, cols = 4;

    // cấp phát "mảng con trỏ"
    int** mat = new int* [rows];
    for (int i = 0; i < rows; ++i) {
        mat[i] = new int[cols];
    }

    // khởi tạo và in
    for (int i = 0; i < rows; ++i)
        for (int j = 0; j < cols; ++j)
            // mat[i][j] = i * 10 + j;
            std::cin >> mat[i][j]; // Truy cập hàng i cột j

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j)
            std::cout << mat[i][j] << ' '; // Truy cập hàng i cột j
        std::cout << '\n';
    }

    // giải phóng (quan trọng)
    for (int i = 0; i < rows; ++i)
        delete[] mat[i];
    delete[] mat;
    mat = nullptr;

    std::cout << "MỘT KHỐI LIÊN TỤC" << std::endl;
    // raw pointer single block
    int* data = new int[rows * cols];

    // write
    for (int i = 0; i < rows; ++i)
        for (int j = 0; j < cols; ++j)
            data[i * cols + j] = i * 10 + j; // Truy cập hàng i cột j

    // read
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j)
            std::cout << data[i * cols + j] << ' '; // Truy cập hàng i cột j
        std::cout << '\n';
    }

    delete[] data;
    data = nullptr;

    return 0;
}