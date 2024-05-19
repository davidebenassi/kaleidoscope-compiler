#include <iostream>

extern "C" {
    double floor(double);
}

int main() {
    double x;
    std::cout << "x value : ";
    std::cin >> x;
    std::cout << floor(x) << std::endl;
    
    return 0;
}
