#include "source.h"
#include "math_lib.h"
#include <iostream>
using namespace std;

void f();

double r = 10.0;
double x = 2.5;
double y = 7.5;

void f() { ++g_counter; }

int main()
{
	cout << "Counter: " << g_counter << endl;  // Output: Counter: 0
	incrementCounter();
	cout << "Counter: " << g_counter << endl;  // Output: Counter: 1
	f();
	cout << "Counter: " << g_counter << endl;  // Output: Counter: 2

	// Sử dụng các hằng số từ namespace HSconstants
	cout << "Pi: " << HSconstants::HSPI << endl;  // Output: Pi: 3.14159
	cout << "Speed of Sound: " << HSconstants::HSSPEED_OF_SOUND << " m/s" << endl;  // Output: Speed of Sound: 343.2 m/s

	// sử dụng các hàm từ thư viện toán
	cout << "Diện tích hình tròn: " << HTFUNTIONSMATH::DienTichHinhTron(r) << endl;
	cout << "Diện tích hình chữ nhật: " << HTFUNTIONSMATH::DienTichChuNhat(x, y) << endl;
	cout << "Chu vi hình tròn: " << HTFUNTIONSMATH::ChuViHinhTron(r) << endl;

	return 0;
}