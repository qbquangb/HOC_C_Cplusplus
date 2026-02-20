#include <iostream>
#include "Constants.h"
using namespace std;
using namespace HSconstants;

// Định nghĩa một macro bằng chỉ thị tiền xử lý #define
#define YEAR_OF_BIRTH 1989

int main()
{
	cout << "----------------------------------------------------------------------" << endl;
	cout << "Year of birth: " << YEAR_OF_BIRTH << endl;

	// Khởi tạo một biến integer với giá trị YEAR_OF_BIRTH
	int nYear{ YEAR_OF_BIRTH };
	cout << "----------------------------------------------------------------------" << endl;

	cout << "Hang so HSPI: " << HSPI << endl;
	cout << "Hang so HSSPEED_OF_SOUND: " << HSSPEED_OF_SOUND << " m/s" << endl;

	cout << "----------------------------------------------------------------------" << endl;

	return 0;
}
