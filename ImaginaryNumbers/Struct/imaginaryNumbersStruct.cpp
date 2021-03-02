#include <iostream>
#include <string>
#include <iomanip>
#include "Imaginary.h"


int main(){
	std::cout << std::endl;
	std::cout << "Using overloaded addition operator" << std::endl;
	
	struct ImagNumber number1{5,5};
	struct ImagNumber number2{6,6};
	struct ImagNumber result{0,0};

	number1.display();//5+j5
	number2.display();//6+j6
	
	std::cout << "Addition" << std::endl;
	result = number1 + number2;	
	result.display(true);//11+j11	
	
	std::cout << std::endl;
	std::cout << "Using overloaded substraction operator" << std::endl;	
	struct ImagNumber number3{3,7};
	struct ImagNumber number4{1,10};
	
	number3.display();
	number4.display();
	
	std::cout << "Substraction" << std::endl;
	result = number3 - number4;
	result.display(true);
	
	std::cout << std::endl;
	std::cout << "Combining Positive and Negative Parts" << std::endl;
	struct ImagNumber number5{-7,0};
	struct ImagNumber number6{-4,-20};
	
	number5.display();
	number6.display();
	
	std::cout << "Substraction" << std::endl;
	result = number5 - number6;
	result.display(true);
	
	std::cout << "Addition" << std::endl;
	result = number5 + number6;
	result.display(true);
	
	struct ImagNumber number7{0,-5};
	struct ImagNumber number8{-7,5};
		
	
	number7.display();
	number8.display();	
	std::cout << "Addition" << std::endl;
	result = number7 + number8;
	result.display(true);
	
	std::cout << "Substraction" << std::endl;
	result = number7 - number8;
	result.display(true);
	
	
	return 0;
}
