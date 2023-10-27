#include"Square.h"

Square::Square() {
        a = 20; c = 20;
        name = " вадрат:";
    }
    bool Square::check() {
        return a == c && b == c && d == c && A == 90 && B == 90 && C == 90 && D == 90;
    };
