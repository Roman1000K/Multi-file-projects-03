#include"EquilateralTriangle.h"

EquilateralTriangle::EquilateralTriangle(){
    a = 30; b = 30;
        A = 60; B = 60; C = 60;
        name = "�������������� �����������:";
    }

    bool EquilateralTriangle::check() {
        return a == c && a == b && A == 60 && B == 60 && C == 60;
    }
