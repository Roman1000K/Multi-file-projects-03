#include "Triangle.h"

Triangle::Triangle() :a(10), b(20), c(30), A(50), B(60), C(70), name("�����������") {}

int Triangle::get_a() { return a; }
int Triangle::get_b() { return b; }
int Triangle::get_c() { return c; }
int Triangle::get_A() { return A; }
int Triangle::get_B() { return B; }
int Triangle::get_C() { return C; }

void Triangle::print_info(Triangle* shape) {
    std::cout << name << std::endl;

    if (check()) {
        std::cout << "����������" << std::endl;
    }
    else {
        std::cout << "������������" << std::endl;
    }
    std::cout << "���������� ������: 3" << std::endl;
    std::cout << "�������: a=" << a << " b=" << b << " c=" << c << std::endl;
    std::cout << "����: A=" << A << " B=" << B << " C=" << C << std::endl;
}

bool Triangle::check() {
    return ((A + B + C) == 180);
}
