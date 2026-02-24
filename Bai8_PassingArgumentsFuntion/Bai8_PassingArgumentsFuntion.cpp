/*

Trong C++, có 3 cách truyền đối số (arguments) cho một hàm
1. Truyền theo giá trị (Pass by Value): Đây là cách truyền đối số phổ biến nhất. 
Khi bạn truyền một biến theo giá trị, một bản sao của biến đó được tạo ra và truyền vào hàm. Thay đổi trong hàm sẽ không ảnh hưởng đến biến gốc.
2. Truyền theo tham chiếu (Pass by Reference): Khi bạn truyền một biến theo tham chiếu, bạn đang truyền địa chỉ của biến đó. 
Thay đổi trong hàm sẽ ảnh hưởng đến biến gốc vì cả hai đều tham chiếu đến cùng một vùng nhớ.
3. Truyền theo con trỏ (Pass by Pointer): Đây là một cách khác để truyền đối số bằng cách sử dụng con trỏ.
Khi bạn truyền một biến theo con trỏ, bạn đang truyền địa chỉ của biến đó thông qua một con trỏ.
Khái niệm con trỏ: Con trỏ là một biến lưu trữ địa chỉ của một biến khác.
Khi bạn truyền một biến theo con trỏ, bạn có thể thay đổi giá trị của biến gốc thông qua con trỏ đó.

2.2 Truyền tham chiếu hằng (Pass by const reference): Đây là một cách truyền đối số an toàn hơn khi bạn không muốn hàm thay đổi giá trị của biến gốc.
Khi bạn truyền một biến theo tham chiếu hằng, bạn đang truyền địa chỉ của biến đó nhưng không cho phép hàm thay đổi giá trị của biến gốc.

*/

#include <iostream>
using namespace std;

// Hàm truyền theo giá trị
void passByValue(int x) {
	x = x + 10; // Thay đổi giá trị của x trong hàm
}

// Hàm truyền theo tham chiếu
void passByReference(int& x) {
	x = x + 10; // Thay đổi giá trị của x trong hàm
}

// Hàm truyền theo con trỏ, truyền địa chỉ của biến
// Hàm này có thể nhận một mảng
void passByPointer(int* x) {
	*x = *x + 10; // Thay đổi giá trị của x trong hàm
}

// Hàm truyền theo tham chiếu hằng
void passByConstReference(const int& x) {
	// x = x + 10; // Lỗi: không thể thay đổi giá trị của x vì nó là tham chiếu hằng
	cout << "Giá trị của x trong hàm passByConstReference: " << x << endl; // Vẫn có thể đọc giá trị của x
}

// Hàm thay đổi giá trị của mảng truyền theo con trỏ
void passArrayByPointer(int* arr, int size) {
	for (int i = 0; i < size; i++) {
		arr[i] = arr[i] + 10; // Thay đổi giá trị của mảng trong hàm
		// *(arr + i) = *(arr + i) + 10; // Cách khác để thay đổi giá trị của mảng trong hàm
	}
}

int main() {
	int a = 5;
	// Truyền theo giá trị
	passByValue(a);
	cout << "Giá trị của a sau khi truyền theo giá trị: " << a << endl; // a vẫn là 5
	// Truyền theo tham chiếu
	passByReference(a);
	cout << "Giá trị của a sau khi truyền theo tham chiếu: " << a << endl; // a đã thay đổi thành 15
	// Truyền theo con trỏ, truyền địa chỉ của biến a
	passByPointer(&a);
	cout << "Giá trị của a sau khi truyền theo con trỏ: " << a << endl; // a đã thay đổi thành 25

	// Truyền theo tham chiếu hằng
	passByConstReference(a); // a vẫn là 25, không bị thay đổi

	// Truyền mảng theo con trỏ
	int arr[5] = { 1, 2, 3, 4, 5 };
	passArrayByPointer(arr, 5);
	cout << "Giá trị của mảng sau khi truyền theo con trỏ: ";
	for (int i = 0; i < 5; i++) {
		cout << arr[i] << " "; // Mảng đã thay đổi thành {11, 12, 13, 14, 15}
	}

	return 0;
}