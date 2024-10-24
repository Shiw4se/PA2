#include <iostream>
#include "FuncA.h"
#include <complex>
int main(){
	FuncA func;
	int n;
	std::complex<double> x(1.0,1.0);
	std::cout<<"Enter n:";
	std::cin>>n;
	std::cout<<"Result: " << func.Calculate(n,x) <<"\n";
	return 0;

}

