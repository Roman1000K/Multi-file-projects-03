#include"IsoscelesTriangle.h"

IsoscelesTriangle::IsoscelesTriangle(){
			c = 10; C = 50;
			name = "Равнобедренный треугольник:";}

		bool IsoscelesTriangle::check() {
			return a == c && c == b && b == a;
		}
