//  Problem Statement:

//  IMPLEMENT A C++ PROGRAM TO SHOW THE CONCEPT OF CONSTRUCTORS AND DESTRUCTORS.
//   a) Calculate addition of two complex numbers using constructor overloading.
//   b) Deallocation of memory space using destructor.


#include<iostream>   
using namespace std;

class Complex {

    int*x; 
	public:
		int real, imaginary; 

	Complex() {
	// Integer array of size 2 created
        x = new int[2];     
	}
	~Complex() {
	// Freed up the memory allocated for integer array
		delete x;            
	}            

	Complex(int tempReal, int tempImaginary) {
		real = tempReal;
		imaginary = tempImaginary;
	}

	// addComp() method to add two complex numbers 
	Complex addComp(Complex C1, Complex C2) {
		Complex temp;

		// adding real part of complex numbers
		temp.real = C1.real + C2.real;

		// adding Imaginary part of complex numbers
		temp.imaginary = C1.imaginary + C2.imaginary;

		// returning the sum
		return temp;
	}
};

int main() {
    int arraySize;

	std::cout << "Enter the size of the array : ";
	std::cin >> arraySize;
	std::cout << "\n";
	
	std::cout << "Creating an object of Complex class..\n";

	// 1st Complex number
	Complex C1(3, 2);

	// printing 1st complex number
	std::cout << "Complex number 1 : "<< C1.real << " + i" << C1.imaginary << endl;

	// 2nd Complex number
	Complex C2(9, 5);

	// printing 2nd complex number
	std::cout<<"Complex number 2 : "<< C2.real << " + i"<< C2.imaginary<<endl;   

	// for Storing the sum
	Complex C3;

	C3 = C3.addComp(C1, C2);

	// printing the sum
	std::cout << "Sum of complex number : " << C3.real << " + i" << C3.imaginary;
	return 0;
}
