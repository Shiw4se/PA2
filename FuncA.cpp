#include "FuncA.h"
#include <cmath>
#include <complex>

FuncA::FuncA(){
}

long long Factorial(int num){
	long long res=1;
	for(int i=2; i<=num;++i){
		res *=i;
	}
	return res;
}

std::complex<double> FuncA::Calculate(int n,std::complex<double> x){
	std::complex<double> sum=0;
	for(int i =0; i<n; ++i){
		sum +=pow(x,2 * i)/static_cast<double>(Factorial(2*i));
	}
	return sum ;
}

