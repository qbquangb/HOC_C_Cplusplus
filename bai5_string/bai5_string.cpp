#include <iostream>
#include <string>
using namespace std;

int main()
{
    cout << "Enter your age: ";
    int nAge;
    cin >> nAge;

    // Xóa khỏi bộ nhớ đệm 32767 ký tự, hoặc đến khi gặp ký tự '\n'
    // Sử dụng sau câu lệnh cin
    std::cin.ignore(32767, '\n');

    cout << "Enter your name: ";
    string strName;
    getline(cin, strName);

	// Nhập văn bản trên nhiều dòng, lưu vào biến strAddress, nhập đến khi gặp ký tự '.' hoặc hết 32767 ký tự
	cout << "Enter your address: ";
	string strAddress;
	getline(cin, strAddress, '.');

    cout << "Hello, " << strName << endl;
    cout << "Your age " << nAge << endl;
	cout << "Your address " << strAddress << endl;
	cout << "---------------------------------------------------------------------------------------------------" << endl;
	cout << "Mot so thao tac voi string" << endl;
	// So sánh 2 chuỗi
	string str1 = "Hello";
	string str2 = "World";
	if (str1 == str2)
	{
		cout << "str1 and str2 are equal" << endl;
	}
	else
	{
		cout << "str1 and str2 are not equal" << endl;
	}

	// Nối chuỗi
	string str3 = str1 + " " + str2;
	cout << "str3: " << str3 << endl;

	// Lấy độ dài chuỗi
	cout << "Length of str3: " << str3.length() << endl;
	// cách khác để lấy độ dài chuỗi
	cout << "Size of str3: " << str3.size() << endl;
    cout << "---------------------------------------------------------------------------------------------------" << endl;

	return 0;
}