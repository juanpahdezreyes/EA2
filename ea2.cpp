#include <iostream>
using namespace std;


class Figura {
private:
int b, h;
float a;


public:
Figura() {
a = 0;
}


Figura(int b, int h) {
this->b = b;
this->h = h;
}


void setArea(float a) {
this->a = a;
}


float getArea() {
return this->a;
}
};


class Cuadrado : public Figura {
public:
Cuadrado() : Figura() {}


Cuadrado(int b, int h) : Figura(b, h) {
setArea(b * h);
}
};


class Rectangulo : public Figura {
public:
Rectangulo() : Figura() {}


Rectangulo(int b, int h) : Figura(b, h) {
setArea(b * h);
}
};
class Triangulo : public Figura {
public:
Triangulo() : Figura() {}


Triangulo(int b, int h) : Figura(b, h) {
setArea(0.5 * b * h);
}
};


int main() {
Cuadrado s(5, 5);
cout << "Area del cuadrado: " << s.getArea() << endl; // 25


Rectangulo r(5, 5);
cout << "Area del rectángulo: " << r.getArea() << endl; // 25


Triangulo t(5, 10);
cout << "Area del triángulo: " << t.getArea() << endl; // 25


return 0;
}





