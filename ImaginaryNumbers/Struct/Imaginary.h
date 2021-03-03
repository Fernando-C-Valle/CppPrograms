#ifndef _IMAGINARY_H_
#define _IMAGINARY_H_

#include <cmath>

//Define the ImaginaryNumbers Struct
struct ImagNumber{
	int real;
	int imaginary;
	//Overloading + operator
	struct ImagNumber operator+(const ImagNumber &rhs){
		struct ImagNumber newNumber;
		newNumber.real = real + rhs.real;
		newNumber.imaginary = imaginary + rhs.imaginary;
		return newNumber;
	}
	//Overloading - operator
	struct ImagNumber operator-(const ImagNumber &rhs){
		struct ImagNumber newNumber;
		newNumber.real = real - rhs.real;
		newNumber.imaginary = imaginary - rhs.imaginary;
		return newNumber;
	}
	double mod(){
		int realPartSquare = (real*real);
		int imaginaryPartSquare = (imaginary * imaginary);
		double modulus = sqrt(realPartSquare + imaginaryPartSquare);
		return modulus;
	}
	//Display both real and imaginary parts
	void display(bool flag=false){
		if(flag == false){
			std::cout << std::showpos;
			if(real != 0 && imaginary != 0){
				std::cout << "Imaginary number: " << real << imaginary << "j" << std::endl;
			}
			else if(real == 0){
				std::cout << "Imaginary number: " << imaginary << "j" << std::endl;
			}
			else {
				std::cout << "Imaginary number: " << real << std::endl;
			}
		}
		else {
			std::cout << std::showpos;
			if(real != 0 && imaginary != 0){
				std::cout << std::setw(5) << std::setfill('-') << "" << "Result: " << real << imaginary << "j" << std::endl;
			}
			else if(real == 0){
				std::cout << std::setw(5) << std::setfill('-') << "" << "Result: " << imaginary << "j" << std::endl;
			}
			else {
				std::cout << std::setw(5) << std::setfill('-') << "" << "Result: " << real << std::endl;
			}
		}
	}
};

#endif
