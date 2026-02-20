/*

Câu lệnh Switch trong C++ là một cấu trúc điều khiển cho phép bạn thực hiện các hành động khác nhau dựa trên giá trị của một biểu thức. 
Câu lệnh Switch thường được sử dụng khi bạn có nhiều trường hợp khác nhau để xử lý và muốn tránh việc sử dụng nhiều câu lệnh if-else lồng nhau.
Cú pháp của câu lệnh Switch như sau:
switch (biểu_thức) {
	case giá_trị_1:
		// Các câu lệnh thực thi khi biểu_thức có giá trị bằng giá_trị_1
		break;
	case giá_trị_2:
		// Các câu lệnh thực thi khi biểu_thức có giá trị bằng giá_trị_2
		break;
	// Thêm các case khác nếu cần
	default:
		// Các câu lệnh thực thi khi biểu_thức không khớp với bất kỳ case nào
}

*/

#include <iostream>
using namespace std;

int main() {
	int choice;
	cout << "Menu:" << endl;
	cout << "1. Option 1" << endl;
	cout << "2. Option 2" << endl;
	cout << "3. Option 3" << endl;
	cout << "Enter your choice: ";
	cin >> choice;
	switch (choice) {
	case 1:
		cout << "You chose Option 1." << endl;
		break;
	case 2:
		cout << "You chose Option 2." << endl;
		break;
	case 3:
		cout << "You chose Option 3." << endl;
		break;
	default:
		cout << "Invalid choice." << endl;
	}
	return 0;
}