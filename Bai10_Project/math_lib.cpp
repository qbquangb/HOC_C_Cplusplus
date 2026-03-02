#include "math_lib.h"

double HTFUNTIONSMATH::DienTichHinhTron(double r) {
	return HSconstants::HSPI * r * r;
}

double HTFUNTIONSMATH::DienTichChuNhat(double x, double y) {
	return x * y;
}

double HTFUNTIONSMATH::ChuViHinhTron(double r) {
	return 2 * HSconstants::HSPI * r;
}