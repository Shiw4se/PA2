#ifndef FUNCA_H
#define FUNCA_H
#include <complex>

// Оголошення класу FuncA
class FuncA {
    public:
        FuncA();  // Конструктор класу
        virtual ~FuncA() {}  // Віртуальний деструктор для коректного очищення при успадкуванні

        // Метод для обчислення значення функції
        std::complex<double> Calculate(int m, std::complex<double> x);
};

#endif

