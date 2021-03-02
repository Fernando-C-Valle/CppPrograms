#include <iostream>
#include <cmath>
#include <iomanip>
#include "Imaginary.h"

double Imaginary::mod(){
	int realPartSquare = (realPart*realPart);
	int imaginaryPartSquare = (imaginaryPart * imaginaryPart);
	double modulus = sqrt(realPartSquare + imaginaryPartSquare);
	return modulus;
}

void Imaginary::display(bool flag){
	if(flag == false){
		std::cout << std::showpos;
		if(realPart != 0 && imaginaryPart != 0){
			std::cout << "Imaginary number: " << realPart << imaginaryPart << "j" << std::endl;
		}
		else if(realPart == 0){
			std::cout << "Imaginary number: " << imaginaryPart << "j" << std::endl;
		}
		else {
			std::cout << "Imaginary number: " << realPart << std::endl;
		}
	}
	else {
		std::cout << std::showpos;
		if(realPart != 0 && imaginaryPart != 0){
			std::cout << std::setw(5) << std::setfill('-') << "" << "Result: " << realPart << imaginaryPart << "j" << std::endl;
		}
		else if(realPart == 0){
			std::cout << std::setw(5) << std::setfill('-') << "" << "Result: " << imaginaryPart << "j" << std::endl;
		}
		else {
			std::cout << std::setw(5) << std::setfill('-') << "" << "Result: " << realPart << std::endl;
		}
	}
}

