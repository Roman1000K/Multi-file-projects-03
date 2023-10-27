#include"Rectangl.h"

Rectangl::Rectangl() {
        a = 10; c = 10; d = 20;
        A = 90; B = 90; C = 90; D = 90;
        name = "Прямоугольник:";
    }
    bool Rectangl::check(){
        return a == c && b == d && A == 90 && B == 90 && C == 90 && D == 90;
    };
