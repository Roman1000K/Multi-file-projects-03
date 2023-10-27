#include "Figure.h"

Figure::Figure() : sides_count(0), name("������") {}

void Figure::print_info() {
    std::cout << name << std::endl;

    if (check()) {
        std::cout << "����������" << std::endl;
    }
    else {
        std::cout << "������������" << std::endl;
    };
    std::cout << "���������� ������: " << sides_count << std::endl;
}

bool Figure::check() {
    return (sides_count == 0);
}
