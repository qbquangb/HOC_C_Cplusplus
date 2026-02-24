#include <iostream>
using namespace std;

int main()
{
	cout << "--------------------------------------------------------\n";
	cout << "TOAN TU DIA CHI &" << endl;
	int x = 10;
	cout << x << '\n'; // print the value of variable x
	cout << &x << '\n'; // print the memory address of variable x
	*&x = 20;
	cout << x << '\n'; // print the value of variable x
	cout << "--------------------------------------------------------\n";
	cout << "CON TRO" << endl;
	int* p;
	p = &x; // assign the memory address of variable x to pointer p
	cout << "Dia chi cua x: " << &x << '\n';
	cout << "Gia tri cua p: " << p << '\n'; // print the memory address stored in pointer p
	cout << "Gia tri cua x: " << x << '\n';
	cout << "Gia tri cua *p: " << *p << '\n'; // print the value stored at the memory address pointed to by p
	cout << "con tro tro con tro";
	int** pp;
	pp = &p; // assign the memory address of pointer p to pointer pp
	cout << "Dia chi cua p: " << &p << '\n';
	cout << "Gia tri cua pp: " << pp << '\n'; // print the memory address stored in pointer pp
	// gán giá trị cho biến x thông qua con trỏ p
	*p = 25;
	cout << "Gia tri cua x sau khi gan qua con tro p: " << x << '\n';
	// gán giá trị cho biến x thông qua con trỏ pp
	**pp = 30;
	cout << "Gia tri cua x sau khi gan qua con tro pp: " << x << '\n';
	// kiểm tra xem con trỏ pp có trỏ đến con trỏ p hay không
	if (pp == &p) {
		cout << "pp tro den p\n";
	}
	else {
		cout << "pp khong tro den p\n";
	}
	// kiểm tra kích thước của con trỏ pp
	cout << "Kich thuoc cua con tro pp: " << sizeof(pp) << " bytes\n";
	cout << "--------------------------------------------------------\n";
	// Tham chiếu con trỏ
	int& ref = x; // tạo một tham chiếu đến biến x
	cout << "Gia tri cua x: " << x << '\n'; // print the value of variable x
	cout << "Gia tri cua ref: " << ref << '\n'; // print the value of variable x through reference ref
	int* ref2 = p; // tạo một con trỏ tham chiếu đến biến x thông qua con trỏ p
	cout << "Gia tri cua ref2: " << ref2 << '\n'; // print the memory address stored in pointer ref2
	cout << "Gia tri cua p: " << p << '\n'; // print the memory address stored in pointer p
	cout << "Dia chi cua x: " << &x << '\n'; // print the memory address of variable x
	cout << "Giá trị NULL: " << NULL << '\n'; // print the value of NULL
	cout << "--------------------------------------------------------\n";

	// Khởi tạo con trỏ với giá trị nullptr
	int* ptr = nullptr; // initialize a pointer with nullptr
	// con trỏ void là con trỏ không có kiểu dữ liệu cụ thể, có thể trỏ đến bất kỳ loại dữ liệu nào
	// nhưng phải ép kiểu (cast) trước khi dereference
	void* voidPtr; // declare a void pointer
	int y = 50;
	voidPtr = &y; // assign the memory address of variable y to void pointer
	// ép kiểu void pointer về int pointer trước khi dereference
	cout << "Gia tri cua y qua void pointer: " << *(static_cast<int*>(voidPtr)) << '\n'; 

	cout << "--------------------------------------------------------\n";

	// Pointer arithmetic
	int arr[5] = { 1, 2, 3, 4, 5 };
	int* arrPtr = arr; // assign the memory address of the first element of the array to pointer arrPtr
	cout << "Gia tri cua arr[0]: " << *arrPtr << '\n'; // print the value of the first element of the array through pointer arrPtr
	// increment the pointer to point to the next element of the array
	arrPtr++;
	cout << "Gia tri cua arr[1]: " << *arrPtr << '\n'; // print the value of the second element of the array through pointer arrPtr
	// last value of the array
	arrPtr += 3; // increment the pointer to point to the last element of the array
	cout << "Gia tri cua arr[4]: " << *arrPtr << '\n'; // print the value of the last element of the array through pointer arrPtr

	cout << "--------------------------------------------------------\n";
#ifdef __cplusplus
	cout << "c++ code: use nullptr\n";
#else
	cout << "c code: use NULL\n";
#endif
	cout << "--------------------------------------------------------\n";

	cout << "CON TRO VA HANG";
	// Pointer to const value
	const int value = 10;
	const int* ptr0 = &value; // ptr là con trỏ hằng
	cout << "Pointer to const value: " << *ptr0 << endl;
	// Const pointers
	int value2 = 10;
	int* const ptr2 = &value2;
	*ptr2 = 100;
	cout << "Const pointers: " << *ptr2 << endl;
	// Const pointer to a const value
	const int value3 = 10;
	const int* const ptr3 = &value3;
	cout << "Const pointer to a const value: " << *ptr3 << endl;

	cout << "--------------------------------------------------------\n";

	return 0;
}
