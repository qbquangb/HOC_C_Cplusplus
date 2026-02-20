#include "Header.h"
#include <iostream>
using namespace std;
using namespace HSconstants;

void f();

void f() { ++g_counter; }

int main()
{
	cout << "Counter: " << g_counter << endl;  // Output: Counter: 0
	incrementCounter();
	cout << "Counter: " << g_counter << endl;  // Output: Counter: 1
	f();
	cout << "Counter: " << g_counter << endl;  // Output: Counter: 2
	// Sử dụng các hằng số từ namespace HSconstants
	cout << "Pi: " << HSPI << endl;  // Output: Pi: 3.14159
	cout << "Speed of Sound: " << HSSPEED_OF_SOUND << " m/s" << endl;  // Output: Speed of Sound: 343.2 m/s
	cout << "Year of Birth: " << HSYEAR_OF_BIRTH << endl;  // Output: Year of Birth: 1989
	return 0;
}