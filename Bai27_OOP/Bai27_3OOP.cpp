#include <iostream>

class DongVat {
public:
    // Hàm ảo cho phép ghi đè ở lớp con
    virtual void tiengKeu() {
        std::cout << "Dong vat keu" << std::endl;
    }
};

class ConMeo : public DongVat {
public:
    // Ghi đè hàm tiengKeu
    void tiengKeu() override {
        std::cout << "Meo keu: Meo meo" << std::endl;
    }
};

class ConCho : public DongVat {
public:
    void tiengKeu() override {
        std::cout << "Cho keu: Gau gau" << std::endl;
    }
};

int main() {

    std::cout << "Con trỏ lớp\n";
    ConMeo Meo;
    ConMeo* pClass = &Meo;
    (*pClass).tiengKeu(); // cách 1
    pClass->tiengKeu(); // cách 2
    std::cout << "End Con trỏ lớp\n";

    // Sử dụng con trỏ của lớp cha để trỏ đến các đối tượng lớp con
    ConMeo* pClass2 = new ConMeo();
    DongVat* dv1 = new ConMeo(); // lớp ConMeo kế thừa lớp DongVat. ghi đè hàm nên sau khi gọi hàm thực hiện là lớp con
    DongVat* dv2 = new ConCho();

    dv1->tiengKeu();  // Gọi phiên bản của ConMeo
    dv2->tiengKeu();  // Gọi phiên bản của ConCho

    delete pClass2;
    pClass2 = nullptr;
    delete dv1;
    dv1 = nullptr;
    delete dv2;
    dv2 = nullptr;

    return 0;
}