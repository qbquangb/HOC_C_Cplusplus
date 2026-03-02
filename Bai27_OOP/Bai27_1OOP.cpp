#include <iostream>
#include <string>
using namespace std;

class SinhVien {
public:
    // Thuộc tính (properties)
    string ten;
    int tuoi;

    // Phương thức (methods)
    void hienThiThongTin() {
        cout << "Ten: " << ten << ", Tuoi: " << tuoi << endl;
    }
};

class TaiKhoan {
private: // Thuộc tính private không thể truy cập trực tiếp từ bên ngoài
    string ten;
    double soDu;

public:
    // Constructor dùng để khởi tạo thuộc tính đối tượng
    TaiKhoan(string tentaikhoan, double soDuBanDau) : ten(tentaikhoan), soDu(soDuBanDau) {
        cout << "Tài khoản " << ten << " đã được tạo" << endl;
    }

    // Destructor hàm hủy, tự động được gọi khi đối tượng bị hủy, dùng để giải phóng tài nguyên hoặc thực hiện các thao tác dọn dẹp.
    ~TaiKhoan() {
        cout << "Tai khoản " << ten << " dang bi huy" << endl;
    }

    // Phương thức public để truy cập dữ liệu một cách an toàn
    void guiTien(double soTien) {
        if (soTien > 0)
            soDu += soTien;
    }

    void rutTien(double soTien) {
        if (soTien > 0 && soDu >= soTien)
            soDu -= soTien;
        else
            cout << "So du khong du de rut tien" << endl;
    }

    // phương thức là phương thức hằng (const member function)
    // tức là không được (về mặt ngôn ngữ) thay đổi trạng thái đối tượng
    // Nói cách khác: phương thức cam kết không sửa các thành phần dữ liệu (non-mutable) của đối tượng.
    double laySoDu() const {
        return soDu;
    }

    string layten() const {
        return ten;
    }

};

int main() {

    // Tạo đối tượng từ lớp SinhVien
    SinhVien an;
    an.ten = "An";
    an.tuoi = 20;
    an.hienThiThongTin();  // Xuất thông tin của đối tượng

    {
        /*TaiKhoan ann("An", 100000.0);*/
        TaiKhoan ann = TaiKhoan("An", 100000.0);
        ann.guiTien(1000.0);
        std::cout << "Số dư hiện tại của " << ann.layten() << " là: " << ann.laySoDu() << " đồng" << std::endl;
        ann.rutTien(500.0);
        std::cout << "Số dư hiện tại của " << ann.layten() << " là: " << ann.laySoDu() << " đồng" << std::endl;
    }
    system("pause");

    return 0;
}