#pragma once
#include <iostream>

class Quadrilateral {
protected:
    int a, b, c, d;
    int A, B, C, D;
    std::string name;
public:
    Quadrilateral();

    int get_a(); 
    int get_b();
    int get_c();
    int get_d();
    int get_A(); 
    int get_B(); 
    int get_C();
    int get_D();

    virtual void print_info(Quadrilateral* shape);

    virtual bool check();
};
