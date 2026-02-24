/*

Nạp chồng hàm (function overloading) là tính năng của ngôn ngữ C++ (không có trong C). 
Kỹ thuật này cho phép sử dụng cùng một tên gọi cho nhiều hàm (có cùng mục đích). 
Nhưng khác nhau về kiểu dữ liệu tham số hoặc số lượng tham số.

*/

typedef int myint; // Khai báo typedef chỉ là một bí danh (không phải kiểu dữ liệu mới)

int add(int a, int b)
{
	return a + b;
}

double add(double a, double b)
{
	return a + b;
}
