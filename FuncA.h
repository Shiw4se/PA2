#ifndef FUNCA_H
#define FUNCA_H
#include <complex>

class FuncA{
	public:
	FuncA();
	virtual ~FuncA() {}

	std::complex<double> Calculate(int m,std::complex<double> x);
};

#endif

