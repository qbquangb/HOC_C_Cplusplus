/*

Đệ quy là khi một hàm gọi chính nó để giải một bài toán bằng cách chia nhỏ bài toán thành những bài toán con cùng loại. 
Mỗi lời gọi (call) là một stack frame chứa biến cục bộ, tham số và địa chỉ trả về.
Hai thành phần thiết yếu:
Base case (điều kiện dừng): trả kết quả trực tiếp, không gọi đệ quy nữa.
Recursive case: chia bài toán thành bài toán con(s) nhỏ hơn và gọi hàm đệ quy.
Nếu không có base case đúng, chương trình sẽ gọi vô hạn (thực tế: stack overflow).

*/

// Tính giai thừa
unsigned long long GiaiThua(unsigned long long n)
{
	if (n == 0)
	{
		return 1ULL; // điều kiện dừng
	}

	return n * GiaiThua(n - 1); // gọi đệ quy
}

// Dãy Fibonaci
/*
Dãy Fibonaci là dãy vô hạn các số tự nhiên. Số Fibonaci thứ n, ký hiệu F(n), được định nghĩa như sau :
	F(n) = 0, nếu n = 0
	F(n) = 1, nếu n = 1
	F(n) = F(n-1) + F(n-2), nếu n > 1

Tỉ lệ vàng
	|.............................|....................|
	|                             |                    |
	|<------------a-------------->|<--------b--------->|
	|----------------------c---------------------------|
	Đoạn thẳng c có tỉ lệ vàng nếu a/b = 1,618
*/
unsigned long long fibonacci(int number) // number >=0
{
	if (number == 0)
		return 0ULL; // điều kiện dừng
	if (number == 1)
		return 1ULL; // điều kiện dừng
	return fibonacci(number - 1) + fibonacci(number - 2);
}

#include <iostream>
using namespace std;

int main() {

	cout << "kiểu dữ liệu unsigned long long chứa: " << sizeof(unsigned long long) << "bytes" << endl;

	unsigned long long res = GiaiThua(100);
	cout << "Kết quả tính giai thừa: " << res << endl;

	// in dãy 100 số fibonacci
	cout << "in dãy 100 số fibonacci đầu tiên\n";
	for (int countt = 0; countt < 20; ++countt)
	{
		cout << fibonacci(countt) << " ";
		if ((countt != 0) && (countt % 10 == 0)) cout << "\n";
	}
	cout << endl;

	return 0;
}