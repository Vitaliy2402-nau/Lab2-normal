#include <iostream>
#include <conio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	float M,H;
	std::cout<<"input M" << std::endl;
	std::cin>>M;
	H = M/60;
	std::cout<< M <<" Minutes ="<<H<<"Hours \n";
	return 0;
}
