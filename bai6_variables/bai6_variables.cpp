// ví dụ về sử dụng biến cục bộ, biến toàn cục và biến tĩnh trong c++
#include <iostream>
using namespace std;

// biến toàn cục
int globalVar = 10;

void function() {
	// biến cục bộ
	int localVar = 20;
	cout << "Inside function - Local Variable: " << localVar << endl;
	cout << "Inside function - Global Variable: " << globalVar << endl;
	// biến tĩnh
	static int staticVar = 0;
	staticVar++;
	cout << "Inside function - Static Variable: " << staticVar << endl;
}

int main() {
	cout << "In main - Global Variable: " << globalVar << endl;
	function();
	function();
	function();
	{
		// biến cục bộ trong một block
		int blockVar = 30;
		cout << "Inside block - Block Variable: " << blockVar << endl;
	}

	return 0;
}