#include"Parallelogram.h"

Parallelogram ::Parallelogram() {
        a = 20; b = 30; c = 20; d = 30;
        A = 30; B = 40; C = 30; D = 40;
        name = "ֿאנאככוכמדנאלל:";
    }

    bool Parallelogram::check()  {
        return a == c && b == c && A == C && B == D;
    };
