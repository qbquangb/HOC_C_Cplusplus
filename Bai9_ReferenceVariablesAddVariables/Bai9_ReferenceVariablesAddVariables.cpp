/*

1. Reference variables là một biến tham chiếu, nó không lưu trữ giá trị trực tiếp mà tham chiếu đến một biến khác. 
Khi bạn tạo một reference variable, bạn phải khởi tạo nó với một biến đã tồn tại. 
Sau đó, reference variable sẽ trở thành một alias (bí danh) cho biến đó, và mọi thay đổi trên reference variable sẽ ảnh hưởng đến biến gốc.

2. AddVariables: Để in ra địa chỉ của biến gốc và reference variable, bạn có thể sử dụng toán tử & để lấy địa chỉ của biến.

*/

#include <iostream>
using namespace std;

int main() {
	int originalVariable = 10; // Biến gốc
	int& referenceVariable = originalVariable; // Biến tham chiếu
	cout << "Giá trị của originalVariable: " << originalVariable << endl;
	cout << "Giá trị của referenceVariable: " << referenceVariable << endl;
	// Thay đổi giá trị thông qua reference variable
	referenceVariable = 20;
	cout << "Sau khi thay đổi referenceVariable:" << endl;
	cout << "Giá trị của originalVariable: " << originalVariable << endl;
	cout << "Giá trị của referenceVariable: " << referenceVariable << endl;
	// In địa chỉ của biến gốc và reference variable
	cout << "Địa chỉ của originalVariable: " << &originalVariable << endl;
	cout << "Địa chỉ của referenceVariable: " << &referenceVariable << endl;
	return 0;
}