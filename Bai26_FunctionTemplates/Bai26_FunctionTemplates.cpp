/*

Trong C++, khuôn mẫu hàm là một cái khuôn dùng để tạo ta nhiều hàm có định nghĩa giống nhau. 
Và nó có thể được tái sử dụng nhiều lần nếu chúng ta muốn.
Khi hàm khuôn mẫu được gọi, compiler sẽ tạo ra một bản sao của hàm đó, 
và thay thế kiểu dữ liệu tương ứng của các tham số khuôn mẫu.

*/

#include <iostream>
using namespace std;

// template <typename Type>
// template <typename T1, typename T2>
template <class Type>
void Swap(Type& x, Type& y)
{
	Type Temp = x;
	x = y;
	y = Temp;
}

int main()
{
	int x = 5, y = 10;
	double a = 5.5, b = 3.5;

	Swap(x, y);
	Swap(a, b);

	int c = 5, d = 10;
	cout << "before swap c = " << c << ", d = " << d << endl;
	Swap(c, d);
	cout << "After swap c = " << c << ", d = " << d << endl;

	return 0;
}
