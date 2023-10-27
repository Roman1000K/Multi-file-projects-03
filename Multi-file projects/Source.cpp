#include <iostream>
#include <Windows.h>
#include "Figure.h"
#include"Triangle.h"
#include"RightTriangle.h"
#include"IsoscelesTriangle.h"
#include"EquilateralTriangle.h"
#include"Quadrilateral.h"
#include"Parallelogram.h"
#include"Rectangl.h"
#include"Square.h"
#include"Rhomb.h"


//class Rhomb : public Parallelogram {
//public:
//    Rhomb() {
//        a = 30; b = 30; c = 30; d = 30;
//        name = "Ромб:";
//    }
//    bool check() override {
//        return a == c && b == c && d == c && d == a && A == C && B == D;
//    };
//};


int main() {


    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    Figure figure;
    figure.print_info();

    std::cout << std::endl;

    Triangle triangle;
    triangle.print_info(&triangle);

    std::cout << std::endl;

    RightTriangle rightTriangle;
    rightTriangle.print_info(&rightTriangle);

    std::cout << std::endl;

    IsoscelesTriangle isoscelesTriangle;
    isoscelesTriangle.print_info(&isoscelesTriangle);

    std::cout << std::endl;

    EquilateralTriangle equilateralTriangle;
    equilateralTriangle.print_info(&equilateralTriangle);

    std::cout << std::endl;

    Quadrilateral quadrilateral;
    quadrilateral.print_info(&quadrilateral);

    std::cout << std::endl;

    Rectangl rectangl;
    rectangl.print_info(&rectangl);

    std::cout << std::endl;

    Parallelogram parallelogram;
    parallelogram.print_info(&parallelogram);

    std::cout << std::endl;

    Square squre;
    squre.print_info(&squre);

    std::cout << std::endl;

    Rhomb rhomb;
    rhomb.print_info(&rhomb);

    return 0;
}