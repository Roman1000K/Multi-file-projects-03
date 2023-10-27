#include"Quadrilateral.h"

 Quadrilateral::Quadrilateral() : a(10), b(20), c(30), d(40), A(50), B(60), C(70), D(80), name("���������������:") {}

    int Quadrilateral::get_a() { return a; }
    int Quadrilateral::get_b() { return b; }
    int Quadrilateral::get_c() { return c; }
    int Quadrilateral::get_d() { return d; }
    int Quadrilateral::get_A() { return A; }
    int Quadrilateral::get_B() { return B; }
    int Quadrilateral::get_C() { return C; }
    int Quadrilateral::get_D() { return D; }

    void Quadrilateral::print_info(Quadrilateral* shape) {

        std::cout << name << std::endl;

        if (check()) {
            std::cout << "����������" << std::endl;
        }
        else {
            std::cout << "������������" << std::endl;
        }
        std::cout << "���������� ������: 4" << std::endl;
        std::cout << "�������: a=" << a << " b=" << b << " c=" << c << " d=" << d << std::endl;
        std::cout << "����: A=" << A << " B=" << B << " C=" << C << " D=" << D << std::endl;
    }

    bool Quadrilateral::check() {
        return ((A + B + C + D) == 360);
    }
