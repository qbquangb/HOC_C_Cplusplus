extern int g_counter;   // declaration: không cấp phát bộ nhớ
extern void incrementCounter();  // declaration: không định nghĩa hàm

#ifndef _HSCONSTANTS_
#define _HSCONSTANTS_

// Định nghĩa namespace chứa các hằng số
namespace HSconstants
{
	const double HSPI{ 3.14159 };
	const double HSSPEED_OF_SOUND{ 343.2 };	// Tốc độ âm thanh 343.2 m/s
	const int HSYEAR_OF_BIRTH{ 1989 };
}

#endif
