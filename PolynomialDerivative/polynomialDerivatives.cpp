#include <iostream>

/*
f(x)=3x^4 + 2x^3 + 6x^2 + 8x + 4
f'(x)=12x^3 + 6x^2 + 12x + 8 + 0
*/

struct Poly{
	int coeff;
	int exp;
};

void print(struct Poly *p, int degree, bool flag){	
	if(flag == false){
		std::cout << "f(x)=";
	}
	else{ 
		std::cout << "f'(x)=";
	}
	for(int i=0;i<=degree;i++){
		if(p[i].coeff != 0){
			std::cout << p[i].coeff << "";
		} 		
		if(p[i].exp != 0){			
			if(p[i].exp == 1){
				std::cout << "x + ";
			}
			else if(p[i].exp > 0 && p[i].coeff != 0){
				std::cout << "x^" << p[i].exp << " + ";
			}
			else {
				if(degree != 0){
					std::cout << " + 0" << std::endl;
				}
				else {
					std::cout << "0" << std::endl;
				}
			}
		}
	}
	std::cout << std::endl;
}

void derivate(struct Poly *p, int degree){
	for(int i=0;i<=degree;i++){
		p[i].coeff *= p[i].exp;
		p[i].exp -= 1;
	}
}

int main(){
	
	int degree = 0;
	std::cout << "Enter the degree of the polynomial: " << std::endl;
	std::cin >> degree;
	
	struct Poly *polynomial = new Poly[degree];	
	struct Poly p1 {0,0};
	
	for(int i=0;i<=degree;i++){
		polynomial[i] = p1;
		std::cout << "Enter the coefficient: " << i << std::endl;
		std::cin >> polynomial[i].coeff;
		std::cout << "Enter the exponent: " << std::endl;
		std::cin >> polynomial[i].exp;		
	}
	print(polynomial, degree, false);
	derivate(polynomial, degree);
	print(polynomial, degree, true);
	
	delete [] polynomial;

	return 0;
}
