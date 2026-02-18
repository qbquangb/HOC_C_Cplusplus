// bai2_kieudulieu.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int n;
	n = 10;
    cout << "n: " << n << endl;
	cout << "-----------------------------------------------------------------------------" << endl;

	cout << "bool:\t\t" << sizeof(bool) << " bytes" << endl;

	cout << "char:\t\t" << sizeof(char) << " bytes" << endl;
	cout << "short:\t\t" << sizeof(short) << " bytes" << endl;
	cout << "int:\t\t" << sizeof(int) << " bytes" << endl;
	cout << "long:\t\t" << sizeof(long) << " bytes" << endl;
	cout << "long long:\t" << sizeof(long long) << " bytes" << endl;

	cout << "float:\t\t" << sizeof(float) << " bytes" << endl;
	cout << "double:\t\t" << sizeof(double) << " bytes" << endl;
	cout << "long double:\t" << sizeof(long double) << " bytes" << endl;

	cout << "Szeof(n):\t\t" << sizeof(n) << " bytes" << endl;

	cout << "-----------------------------------------------------------------------------" << endl;
	// Đặt độ chính xác cho phần thập phân là 15 chữ số
	float f = 3.123456789123456789123456789f;
	cout << "before setprecision float f: " << f << endl;
	cout << fixed << setprecision(15);
	cout << "after setprecision float f: " << f << endl;
	cout << "-----------------------------------------------------------------------------" << endl;
	double d{ 123456789.0 };
	cout << "before setprecision d: " << d << endl;
	cout << fixed << setprecision(9);
	cout << "after setprecision d: " << d << endl;

	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
