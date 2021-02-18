#include <iostream>
#include <conio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main()
 {
 	float S,T,A;
 	std::cout<<"Input $:"<<std::endl;
 	std::cout<<"Input Time:"<<std::endl;
 	std::cin>>S>>T;
 	A =S*(1+5/100)^T;
 	std::cout<<"A="<<A<< std::endl;
	return 0;
}
