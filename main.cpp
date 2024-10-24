#include <iostream>  
#include "FuncA.h"   
#include <complex>   

int main() {
    FuncA func;  
    int n;       
    std::complex<double> x(1.0, 1.0);  // Ініціалізація комплексного числа x з дійсною частиною 1.0 та уявною частиною 1.0

    std::cout << "Enter n:";  
    std::cin >> n;             

    std::cout << "Result: " << func.Calculate(n, x) << "\n";  // Виклик методу Calculate класу FuncA і вивід результату

    return 0;  
}


