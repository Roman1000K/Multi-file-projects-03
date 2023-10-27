#include "Figure.h"

Figure::Figure() : sides_count(0), name("Фигура") {}

void Figure::print_info() {
    std::cout << name << std::endl;

    if (check()) {
        std::cout << "Правильная" << std::endl;
    }
    else {
        std::cout << "Неправильная" << std::endl;
    };
    std::cout << "Количество сторон: " << sides_count << std::endl;
}

bool Figure::check() {
    return (sides_count == 0);
}
