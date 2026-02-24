#include <iostream>
using namespace std;

int main()
{
	int arr[] = { 14, 3, 6, 27, 12 };
	for (int item : arr)
	{
		// biến item đại diện cho phần tử mảng ở mỗi vòng lặp
		cout << item << " ";
	}
	cout << endl;
	// Thay đổi giá trị arr bằng tham chiếu
	for (auto& item : arr)
	{
		cin >> item;
	}
	// In giá trị thay đổi sử dụng tham chiếu hằng
	for (const auto& item : arr)
	{
		cout << item << "\t";
	}

	return 0;
}
