# CppPrograms
This is a repository where some C++ projects can be found. There is no relation
between them, since each program has different purposes.

# Imaginary Numbers
This project includes 2 versions, one using a class and the other one a structure.
This program can perform basic operations on imaginary numbers, such as addition,
substraction and modulus. Each of these functions are defined in the "Imaginary"
class as member methods. 

## Execution And Working
In order to use this program just include the libraries:

iostream

iomanip

As well as the project's library as follows:

\#include "Imaginary.h"

To use the program, depending on the file selected, you can create an Imaginary object using 
the class or struct version, initializing the no-args constructor
or the overloaded constructor, to set both the real and imaginary parts (in that order) or initializing the struct
as struct Imaginary name{realPart, imaginaryPart};

Once the objects are defined, to add 2 imaginary numbers just use the "+" operator between
both numbers, since this was overloaded for addition. These steps also work for substraction.
To get the modulus of the number, just use the .mod() method.

To print the numbers in the rectangular representation, use the .display() method. This method
defaults a flag to false. If the flag is changed to true then a special output is printed, in order
to distinguish a simple number from the result when performing any operation.

Output example:

Imaginary number: +3+7j

Imaginary number: +1+10j //Just using .display() method

Substraction

-----Result: +2-3j //using .display(true)

# Polynomial Derivative
This is a simple program where the user can enter a degree of a polynomial and 
then get the derivative, represented using the format f'(x). 

The elements of the polynomial must match the degree given in the first input.
Example: 

Degree: 4

f(x)=3x^4 + 2x^3 + 6x^2 + 8x + 4

f'(x)=12x^3 + 6x^2 + 12x + 8 + 0

## Execution
To run this program just type this command:
g++ -Wall -o executableName polynomialDerivatives.cpp

