#include <iostream>

extern "C" {
    double eqn2(double,double,double);
}

extern "C" {
    double printval(double, double, double);
}

double printval(double x1, double x2, double flag) {
    if (x2 == 0) {
       std::cout << "Two real and coincident solutions: x1=x2=" << x1 << std::endl;
    } else if (flag == 0) {
       std::cout << "Two complex e conjugate solutions: x1 = " << x1 << "+" << x2 << "i  ";
       std::cout << "x2 = " << x1 << "-" << x2 << "i\n";
    } else {
       std::cout << "Two real and distinct solutions: x1 = " << x1 << ", x2 = " << x2 << std::endl;
    };
    return 0.0;
};

int main() {
    double a,b,c;
    std::cout << "Coefficients a, b and c off the equation (separated by space): ";
    std::cin >> a >> b >> c;
    return eqn2(a,b,c);
}
