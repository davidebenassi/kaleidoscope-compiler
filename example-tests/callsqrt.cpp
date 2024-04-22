#include <iostream>

extern "C" {
    double sqrt(double);
}

int main() {
    double x;
    std::cout << "Value of x : ";
    std::cin >> x;
    std::cout << "sqrt(" << x << ") = " << sqrt(x) << std::endl;
}
