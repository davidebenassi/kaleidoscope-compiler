#include <iostream>

extern "C" {
    double fibo(double);
}

int main() {
    double n;
    std::cout << "Valore of n : ";
    std::cin >> n;
    std::cout << "fibonacci(" << n << ") = " << fibo(n) << std::endl;
}
