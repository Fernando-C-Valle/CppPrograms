#include <iostream>
#include <string>
#include <vector>

//Base class
class Conversion{
	private:
		std::string numbers;
		int num;		
	public:
		Conversion(int number)
		:num{number}{
		}
		//Methods
		std::string convert(int base);
};

std::string Conversion::convert(int base = 16){		
	switch(base){
		case 2:
			numbers = "01";
			break;
		case 8:
			numbers = "01234567";
			break;
		default:
			numbers = "0123456789ABCDEF";
			base = 16;				
	}	
	std::string result {};	
	std::vector<int> partials {0};
	
	double division = num / static_cast<double>(base);
	int quotient = division; //just the whole number
	int remainder = (division - quotient) * base;//Get the remainder
	
	partials[0] = remainder;
		
	while(quotient != 0){
		division = quotient / static_cast<double>(base);
		quotient =  division;
		remainder = (division - quotient) * base;		
		
		partials.push_back(remainder);
	}		
	
	for(int i = partials.size()-1; i >= 0;i--){
		result += numbers[partials[i]];		
	}
	
	return result;
}


int main(){
		
	Conversion n(176);
	std::cout << "To Binary: " << n.convert(2) << std::endl;
	std::cout << "To Octal: " << n.convert(8) << std::endl;
	std::cout << "To Hexadecimal: " << n.convert(16) << std::endl;
	std::cout << "To Hexadecimal (default): " << n.convert(56) << std::endl;
	
	return 0;
}

