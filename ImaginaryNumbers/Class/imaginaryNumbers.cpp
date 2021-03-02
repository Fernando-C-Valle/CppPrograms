#include <iostream>
#include <iomanip>
#include "Imaginary.h"


int main(){

	Imaginary number();//No-args constructor, parts initialized to 0
	Imaginary number1(0,5);
	Imaginary number2(4,6);
	
	std::cout << "Numbers" << std::endl;
	number1.display();
	number2.display();
 
	
	Imaginary result{};//Object to store the result
	std::cout << "Addition" << std::endl;
	result = number1 + number2;
	result.display(true);
	std::cout << "MODULUS: " << result.mod() << std::endl;
	
	std::cout << "Substraction" << std::endl;
	result = number1 - number2;
	result.display(true);
	
	Imaginary number3(-1,0);
	Imaginary number4(-4,-9);
	
	number3.display();
	number4.display();
	
	std::cout << "Addition" << std::endl;
	result = number3 + number4;
	result.display(true);
	
	std::cout << "Substraction" << std::endl;
	result = number3 - number4;
	result.display(true);
	
	return 0;
}

