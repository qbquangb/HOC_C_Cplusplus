#include <iostream>
#include <array>
using namespace std;

#define MAX 10

int* allocateArray(int size)
{
	return new int[size];
}

int& getElement(array<int, MAX>& arr, int idx) // Hàm trả về tham chiếu
{
	return arr[idx]; // trả về tham chiếu tới phần tử idx
}

int main()
{
	int* arrayy = allocateArray(10); // Hàm trả về địa chỉ

	arrayy[0] = 100;
	arrayy[1] = 200;
	arrayy[2] = 300;
	arrayy[3] = 400;
	arrayy[4] = 500;
	cout << "elemant the forth is: " << arrayy[3] << endl;

	delete[] arrayy;
	arrayy = nullptr;

	array<int, MAX> arr;
	// gán phần tử thứ 3 = 20 bằng tham chiếu <=> arr[2] = 20
	getElement(arr, 2) = 20;

	cout << arr[2] << '\n'; // in 20

	return 0;
}
