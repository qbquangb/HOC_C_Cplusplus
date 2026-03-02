// math_lib.h

#ifndef _HSCONSTANTS_
#define _HSCONSTANTS_

// Định nghĩa namespace chứa các hằng số
namespace HSconstants
{
	const double HSPI{ 3.14159 }; //HS pi
	const double HSSPEED_OF_SOUND{ 343.2 };	// Tốc độ âm thanh 343.2 m/s
}

#endif // _HSCONSTANTS_

#ifndef _HTFUNTIONSMATH_
#define _HTFUNTIONSMATH_

// Các hàm toán học
namespace HTFUNTIONSMATH
{
	double DienTichHinhTron(double r);
	double DienTichChuNhat(double x, double y);
	double ChuViHinhTron(double r);
}

#endif // _HTFUNTIONSMATH_