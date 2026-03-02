#include <iostream>
#include <string>
using namespace std;

class DongVat {
private:
    string ten;
public:
    void an() {
        std::cout << "Dong vat dang an" << std::endl;
    }
};

class ConCho : public DongVat {  // Lớp ConCho kế thừa từ DongVat
private:
    string ten;
public:
    void sua() {
        std::cout << "Con cho dang sua" << std::endl;
    }
};

int main() {
    ConCho milk;
    milk.an();   // Sử dụng phương thức kế thừa từ lớp DongVat
    milk.sua();  // Phương thức của lớp ConCho
    return 0;
}