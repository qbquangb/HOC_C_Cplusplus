#include <iostream>
#include <cstring> // Ham strlen() va _strupr_s() duoc dinh nghia trong thu vien nay.
using namespace std;

int main()
{
	cout << "------------------------------------------------------------------------------" << endl;
	char szAddress[20];

	cout << "Nhap dia chi: ";
	cin.getline(szAddress, 20); // Ham getline() doc mot dong du lieu tu ban phim va luu vao mang ky tu.
	// Tham so thu nhat la ten mang, tham so thu hai la kich thuoc toi da cua mang.
	// Ham getline() se doc du lieu cho den khi gap ky tu xuong dong (Enter) 
	// hoac khi da doc du lieu toi da (20 ky tu trong truong hop nay). 
	// Neu nguoi dung nhap qua 20 ky tu, cac ky tu sau se bi bo qua va khong duoc luu vao mang.

	cout << "Dia chi cua ban la: " << szAddress << endl;
	cout << "------------------------------------------------------------------------------" << endl;

	cout << "MOT SO THAO TAC VOI CHUOI KI TU C STYLE" << endl;
	// 1. Độ dài của chuỗi
	int length = strlen(szAddress); // Ham strlen() tra ve do dai cua chuoi ki tu, khong tinh ky tu null ('\0') o cuoi chuoi.
	cout << "Do dai cua chuoi: " << length << endl;
	// 2. Chuyển sang chữ in hoa
	for (int i = 0; i < length; i++)
	{   // Ham toupper() chuyen mot ky tu thanh chu in hoa neu no la chu thuong. Neu khong, no se tra ve ky tu goc.
		szAddress[i] = toupper(szAddress[i]);
	}
	cout << "Chuoi sau khi chuyen sang in hoa cach 1: " << szAddress << endl;
	// Chuyển sang chữ in hoa cách 2, _strupr_s
	// Ham _strupr_s la ham chuyen toan bo chuoi ki tu sang chu in hoa.
	_strupr_s(szAddress); // hoặc strupr() + #define _CRT_NONSTDC_NO_DEPRECATE
	cout << "Chuoi sau khi chuyen sang in hoa cach 2: " << szAddress << endl;
	// 3. Hàm chuyển sang chữ thường
	char szLowerAddress[] = "HELLO WORLD";
	for (int i = 0; i < strlen(szLowerAddress); i++)
	{   // Ham tolower() chuyen mot ky tu thanh chu thuong neu no la chu in hoa. Neu khong, no se tra ve ky tu goc.
		szLowerAddress[i] = tolower(szLowerAddress[i]);
	}
	cout << "Chuoi sau khi chuyen sang in thuong cach 1: " << szLowerAddress << endl;
	// Chuyển sang chữ thường cách 2, _strlwr_s
	// Ham _strlwr_s la ham chuyen toan bo chuoi ki tu sang chu in thuong.
	char szLowerAddress2[] = "HELLO WORLD";
	_strlwr_s(szLowerAddress2); // hoặc strlwr() + #define _CRT_NONSTDC_NO_DEPRECATE
	cout << "Chuoi sau khi chuyen sang in thuong cach 2: " << szLowerAddress2 << endl;
	// 4. Sao chép chuỗi
	char szCopyAddress[20];
	strcpy_s(szCopyAddress, szAddress); // Ham strcpy_s sao chep chuoi tu mang nguon (szAddress) sang mang dich (szCopyAddress).
	                                    // hoặc strcpy() + #define _CRT_SECURE_NO_WARNINGS
	cout << "Chuoi sau khi sao chep: " << szCopyAddress << endl;
	// 5. Nối chuỗi
	char szConcatAddress[40] = "Dia chi: ";
	strcat_s(szConcatAddress, szAddress); // Ham strcat_s noi chuoi nguon (szAddress) vao cuoi chuoi dich (szConcatAddress).
	                                      // hoặc strcat() + #define _CRT_SECURE_NO_WARNINGS
	cout << "Chuoi sau khi noi: " << szConcatAddress << endl;
	// 6. So sánh chuỗi
	char szCompareAddress[] = "DIA CHI: ";
	// Ham strcmp() so sanh hai chuoi ki tu. 
	// Neu hai chuoi giong nhau, no tra ve 0. Neu chuoi thu nhat nho hon chuoi thu hai, no tra ve gia tri am. 
	// Neu chuoi thu nhat lon hon chuoi thu hai, no tra ve gia tri duong.
	int compareResult = strcmp(szConcatAddress, szCompareAddress);
	cout << "Ket qua so sanh: " << compareResult << endl;
	// 7. Tìm kiếm ký tự trong chuỗi

	char ten[20];
	cout << "Nhap ten: ";
	cin.getline(ten, 20);

	// Ham strchr() tim kiem ky tu 'C' trong chuoi ten.
	// Neu tim thay, no tra ve con tro den vi tri dau tien cua ky tu do trong chuoi. 
	// Neu khong tim thay, no tra ve nullptr (hoac NULL (gia tri 0 trong C).
	// nullptr la mot gia tri dac biet trong C++11 va cac phien ban sau, 
	//			duoc su dung de bieu thi con tro khong tro den dia chi nao.
	// Trong C, NULL duoc dinh nghia la 0, va duoc su dung de bieu thi con tro khong tro den dia chi nao.
	char* pFoundTen = strchr(ten, 'C');
	cout << "Ket qua tim kiem 'C' trong ten: " << (pFoundTen ? pFoundTen : "Khong tim thay") << endl;

	// 8. Tìm kiếm chuỗi con trong chuỗi
	char chuoiCon[20];
	cout << "Nhap chuoi con: ";
	cin.getline(chuoiCon, 20);
	// Ham strstr() tim kiem chuoi con (chuoiCon) trong chuoi cha (ten).
	// Neu tim thay, no tra ve con tro den vi tri dau tien cua chuoi con trong chuoi cha.
	// Neu khong tim thay, no tra ve nullptr (hoac NULL (gia tri 0 trong C).
	char* pFoundSubstr = strstr(ten, chuoiCon);
	if (pFoundSubstr == nullptr) // so sánh an toàn với nullptr thay vì NULL(0)
	/*if (pFoundSubstr == NULL)*/
	{
		cout << "Khong tim thay chuoi con trong ten." << endl;
	}
	else
	{
		cout << "Ket qua tim kiem chuoi con trong ten: " << pFoundSubstr << endl;
	}

	cout << "------------------------------------------------------------------------------" << endl;

	return 0;
}
