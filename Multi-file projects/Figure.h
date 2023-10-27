#pragma once
#include <iostream>
#include <Windows.h>

class Figure {
protected:
    int sides_count;
    std::string name;

public:
    Figure();

    virtual void print_info();

    bool check();
};

