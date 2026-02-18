#include <iostream>
#include <iomanip>	// for std::setw(n), std::setfill(ch), std::left, std::right
using namespace std;

int main()
{
	cout << "--------------------------------------------------------------------------------------" << endl;
	int n{ 0 };

	// thông báo yêu cầu user nhập tuổi
	cout << "Enter your age: ";

	// đọc giá trị từ console và lưu vào biến n
	cin >> n;

	// in giá trị biến n (tuổi) lên màn hình
	cout << "Your age: " << n << endl;
	cout << "--------------------------------------------------------------------------------------" << endl;

	cout << endl;
	cout << endl;
	cout << setw(5) << left << "ID";		// độ rộng 5 ký tự, canh trái ID
	cout << setw(30) << left << "Name";	// độ rộng 30 ký tự, canh trái Name
	cout << setw(20) << right << "Address" << endl;	// độ rộng 20 ký tự, canh phải Address
	cout << setfill('-');		// set fill bằng ký tự '-'
	cout << setw(55) << "-" << endl;	// fill 55 ký tự '-'
	// reset fill bằng ký tự ' '
	cout << setfill(' ');

	// in thông tin theo format như trên
	cout << setw(5) << left << 1;
	cout << setw(30) << left << "Tran Dinh Thuong";
	cout << setw(20) << right << "Quang Binh" << endl;

	cout << setw(5) << left << 2;
	cout << setw(30) << left << "Nguyen Van A";
	cout << setw(20) << right << "Da Nang" << endl;

	cout << "--------------------------------------------------------------------------------------" << endl;

	return 0;
}