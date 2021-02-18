#define _USE_MATH_DEFINES
#include <iostream>
#include <conio.h>
#include <cmath>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
{
	double S,r,h;
	const double PI =3.141592653589793;
	std::cout<<"input r and h:" << std::endl;
	std::cin>>r>>h;
	S = 1/3*PI*r^2*h;
	std::cout<<"S="<<S<< std::endl;
	return 0;
}
