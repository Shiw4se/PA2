#include <iostream>
#include "FuncA.h"
#include <complex>

int main(){
	FuncA func;
	std::complex<double> x(1.0,1.0);
	int n =3;
	std::complex<double> res=func.Calculate(n,x);
	std::cout<<"Result: " << res <<"\n";
	return 0;

}

