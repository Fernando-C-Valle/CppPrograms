#ifndef _IMAGINARY_H_
#define _IMAGINARY_H_

class Imaginary{
	private:
		int realPart;	
		int imaginaryPart;
	public:
		Imaginary():realPart{0}, imaginaryPart{0}{			
		}
		Imaginary(int real, int imaginary):realPart{real}, imaginaryPart{imaginary}{			
		}
		//Overloaded + operator
		Imaginary operator + (const Imaginary &rhs){
			//Calling the no-args operator
			Imaginary temp(realPart + rhs.realPart, imaginaryPart + rhs.imaginaryPart);				
			return temp;
		}
		//overloaded - operator
		Imaginary operator - (const Imaginary &rhs){
			Imaginary temp(realPart - rhs.realPart, imaginaryPart - rhs.imaginaryPart);
			return temp;
		}
		void display(bool flag = false){
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
};

#endif
