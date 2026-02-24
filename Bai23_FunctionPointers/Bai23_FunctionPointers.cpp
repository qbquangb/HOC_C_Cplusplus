/*

Con trỏ hàm là một biến lưu trữ địa chỉ của một hàm, thông qua biến đó, ta có thể gọi hàm mà nó trỏ tới.

*/

#include <iostream>
#include <functional>
using namespace std;
using Op = int(*)(int, int);

int add(int a, int b) { return a + b; }
int sub(int a, int b) { return a - b; }
int mul(int a, int b) { return a * b; }

int apply(Op p, int a, int b) {
    return p(a, b);
}

// Hàm trả về con trỏ hàm
Op select_op(char op) {
    switch (op) {
    case '+': return add;
    case '-': return sub;
    default:  return nullptr;
    }
}

int main() {

    Op p = add;

    // Khai báo con trỏ hàm: p2 là con trỏ tới hàm nhận (int,int) trả về int
    int (*p2)(int, int) = add;
    // Gọi: hai cách
    int s1 = p(2, 3);            // gọi như hàm
    cout << "int s1 = p(2, 3);" << s1 << endl;
    int s2 = (*p)(2, 3);         // dereference rồi gọi (cũng được)
    cout << "s2" << s2 << endl;

    int res = apply(add, 4, 5); // trả về 9
    cout << "gia tri cua res: " << res << endl;

    // Mảng con trỏ hàm
    Op ops[] = { add, sub, mul };
    std::cout << ops[0](2, 3) << '\n'; // 5
    std::cout << (*ops[0])(2, 3) << '\n'; // 5

    // Sử dụng hàm trả về con trỏ hàm
    int res2 = select_op('+')(2, 3);
    cout << "Sử dụng hàm trả về con trỏ hàm: " << res2 << endl;
    cout << "------------------------------------------------------------------------" << endl;

    // Sử dụng std::function thay cho con trỏ hàm
    std::function<int(int, int)> f = [](int a, int b) { return a * b; };
    int r = f(3, 4); // 12
    cout << "Sử dụng std::function thay cho con trỏ hàm, giá trị r: " << r << endl;

    cout << "------------------------------------------------------------------------" << endl;

    return 0;
}