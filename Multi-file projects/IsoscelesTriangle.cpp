#include"IsoscelesTriangle.h"

IsoscelesTriangle::IsoscelesTriangle(){
			c = 10; C = 50;
			name = "�������������� �����������:";}

		bool IsoscelesTriangle::check() {
			return a == c && c == b && b == a;
		}
