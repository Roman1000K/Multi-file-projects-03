#pragma once
#include <iostream>
#include "Figure.h"

class Triangle : public Figure {
protected:
    int a, b, c;
    int A, B, C;
    std::string name;

public:
    Triangle();

    int get_a();
    int get_b();
    int get_c();
    int get_A();
    int get_B();
    int get_C();

    void print_info(Triangle* shape);

    virtual bool check();
};

