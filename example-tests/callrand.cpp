#include <iostream>
#include <ctime>

extern "C" {
    double randk();
}

extern "C" {
    double randinit(double);
}

int main() {
    double x;
    int n_values;
    std::time_t t = std::time(0);
    randinit(t);
    
    std::cout << "How many random values : ";
    std::cin >> n_values;
    std::cout << std::endl;
    for (int i=0; i<n_values; i++) {
       std::cout << randk() << std::endl;
    }; 
    return 0;
}
