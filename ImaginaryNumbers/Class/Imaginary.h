#ifndef _IMAGINARY_H_
#define _IMAGINARY_H_

class Imaginary{				
	private:
		int realPart;	
		int imaginaryPart;
	public:
		//Constructors
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
		//Methods
		void display(bool flag = false);
		double mod();
};

#endif
