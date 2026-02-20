/*

Trong C++, có hai loại chuyển đổi kiểu dữ liệu: chuyển đổi ngầm định (implicit type conversion) và chuyển đổi tường minh (explicit type conversion). 
Chuyển đổi tường minh, còn được gọi là ép kiểu, cho phép bạn chỉ định rõ ràng kiểu dữ liệu mà bạn muốn chuyển đổi sang.

*/

#include <iostream>
using namespace std;

int main() {
	double num1 = 3.14;
	int num2 = (int)num1; // Chuyển đổi tường minh bằng cách sử dụng toán tử ép kiểu C
	cout << "Số nguyên sau khi chuyển đổi: " << num2 << endl;
	double num3 = 5.99;
	int num4 = static_cast<int>(num3); // Chuyển đổi tường minh bằng cách sử dụng static_cast
	cout << "Số nguyên sau khi chuyển đổi: " << num4 << endl;
	return 0;
}