/*

 C++ cung cấp lớp std::vector hỗ trợ việc thao tác với mảng động an toàn và dễ dàng hơn. Với lớp std::vector, 
 bạn có thể tạo các mảng động mà không cần phải cấp phát và thu hồi vùng nhớ bằng cách sử dụng toán tử new và delete

*/

#include <vector>
#include <iostream>
using namespace std;

void printVector(const vector<int>& value);

int main() {

    // Khai báo và khởi tạo vector

    // rỗng
    vector<int> a;

    // size n với giá trị mặc định
    std::vector<int> b(5);          // 5 phần tử = 0 {0, 0, 0, 0, 0}

    // size n với giá trị cụ thể
    std::vector<int> c(3, 7);       // {7, 7, 7}

    // từ initializer list
    std::vector<int> d = { 1, 2, 3 };

    cout << "value begin of d: " << d[0] << endl;
    cout << "value end of d: " << d.at(2) << endl;

    int* arr = d.data();
    for (int i = 0; i < d.size(); i++)
    {
        cout << "value of d at " << i << " is: " << arr[i] << endl;
    }

    cout << "MỘT SỐ THAO TÁC VỚI VECTO" << endl;
    vector<int> e = { 1,2,3,4,5 };
    // in ra cac phan tu cua vector e
    printVector(e);
    vector<int> f;
    f.reserve(10); // đặt dung lượng vector là 10
    // in ra cac phan tu cua vector f
    printVector(f);

    cout << "---------------------------------------------------------------" << endl;
    // Hành vi ngăn xếp
    vector<int> stack;
    stack.reserve(10);
    stack.push_back(0);
    printVector(stack);
    stack.push_back(1);
    printVector(stack);
    stack.push_back(2);
    printVector(stack);
    stack.push_back(3);
    printVector(stack);
    stack.push_back(4);
    printVector(stack);
    stack.pop_back();
    printVector(stack);

    cout << "---------------------------------------------------------------" << endl;

    cout << "VECTOR 2 CHIEU, MA TRAN" << endl;
    cout << "tạo mảng động 2 chiều." << endl;
    int rows = 3, cols = 4;
    std::vector<std::vector<int>> mat(rows, std::vector<int>(cols));

    for (int i = 0; i < rows; ++i)
        for (int j = 0; j < cols; ++j)
            mat[i][j] = i * 10 + j;

    for (auto& row: mat) {
        for (auto& v: row) std::cout << v << ' ';
        std::cout << '\n';
    }
    // không cần giải phóng thủ công

    cout << "---------------------------------------------------------------" << endl;

    return 0;
}

void printVector(const vector<int>& value) {
    cout << "cac phan tu cua vector: ";
    for (const auto& item : value)
    {
        cout << item << " ";
    }
    cout << endl;
}