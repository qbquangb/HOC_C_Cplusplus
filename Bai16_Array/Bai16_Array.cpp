/*

Mảng 1 chiều là mảng tĩnh, và nó có 1 số khuyết điểm: mảng trở thành con trỏ và mất thông tin chiều dài khi truyền vào hàm, 
không có nhiều hàm hỗ trợ sẵn.
Để giải quyết những vấn đề về quản lý và sử dụng mảng tĩnh, 
thư viện chuẩn C++ đã cung cấp lớp std::array được khai báo trong thư viện <array> thuộc namespace std.

*/

#include <iostream>
#include <array>
#include <algorithm>
using namespace std;

void printArray(const array<int, 5>& arr) // truyền tham chiếu (hoac tham chiếu hằng) vì hiệu suất
{
	cout << "So phan tu: " << arr.size() << endl; // có thể biết số phần tử ở mọi hàm
	for (const auto& item : arr) // có thể sử dụng for-each loops ở mọi hàm
	{
		cout << item << ' ';
	}
	cout << endl;
}

int main() {

	// Khai báo và khởi tạo mảng array
	array <int, 5> arr = { 2, 5, 8, 3, 1 };
	arr[4] = 0;
	cout << "element forth equa: " << arr[4] << endl;
	arr.at(0) = 0;
	cout << "element the first equa: " << arr.at(0) << endl;
	cout << "------------------------------------------------------------" << endl;
	// Xem kích thước mảng
	cout << "Size of Arr is: " << arr.size() << endl;
	// Truyen mang arr vao ham, mang arr khong chuyen thanh con tro nen co the su dung
	// ham arrr.size() hoac for-each loops
	cout << "Arr ban dau: \n";
	printArray(arr);
	// Sap xep arr tang
	sort(arr.begin(), arr.end());
	cout << "Arr sau khi sap xep tang: \n";
	printArray(arr);
	// Sap xep arr giam
	sort(arr.rbegin(), arr.rend());
	cout << "Arr sau khi sap xep giam: \n";
	printArray(arr);

	return 0;
}