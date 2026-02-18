#include <iostream>
#include <iomanip>	// for std::setprecision()
#include "dinh_nghia.h"
using namespace std;

void ch()
{
	cout << "---------------------------------------BEGIN FUN CH----------------------------------" << endl;
	int nn{ 75 };
	cout << static_cast<char>(nn) << endl; // in ký tự với mã ASCII 75

	char ch{ 'K' };
	char ch2(7);
	// cout << "Ky tu ch: " << ch << "\a\a\a\a\a" << endl; // in ký tự 'K'
	cout << "Ky tu ch: " << ch << ch2 << ch2 << ch2 << ch2 << ch2 << endl; // in ký tự 'K'
	cout << static_cast<int>(ch) << endl; // in mã ASCII của ký tự 'K'
	cout << "-----------------------------------------------------------------------------" << endl;
	cout << "Ky tu voi ma oct 113: " << '\113' << endl;
	cout << "Ky tu voi ma hex 0x4B: " << '\x4B' << endl;

	int n{ 75 };
	cout << hex; // chuyển xuất sang hệ thập lục phân
	cout << "Ma hex cua n: " << n << endl; // in mã hex của n
	cout << dec; // chuyển xuất về hệ thập phân
	cout << "Ma dec cua n: " << n << endl; // in mã dec của n
	cout << "---------------------------------------END FUN CH----------------------------------" << endl;

}