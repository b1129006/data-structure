#include <iostream>
using namespace std;

class Complex {
private:
	double real;
	double imaginary;

public:
	/*Complex(double r, double i) {
		real = r;
		imaginary = i;
	}*/
	Complex() {
		real = 0;
		imaginary = 0;
	}

	/*void get_complexnumber() {
		cout << real << "+" << imaginary << "i" << endl;
	}*/

	Complex operator+ (Complex const& AddNewComplex) {
		Complex AddtionResult;
		AddtionResult.real = real + AddNewComplex.real;
		AddtionResult.imaginary = imaginary + AddNewComplex.imaginary;
		return AddtionResult;
	}

	Complex operator* (Complex const& MulNewComplex) {
		Complex MultiplicationResult;
		MultiplicationResult.real = (real * MulNewComplex.real) - (imaginary * MulNewComplex.imaginary);
		MultiplicationResult.imaginary = (real * MulNewComplex.imaginary) + (imaginary * MulNewComplex.real);
		return MultiplicationResult;
	}
	//Complex() :real(0), imaginary(0) {}

	friend istream& operator >> (istream& is, Complex& t) {
		is >> t.real >> t.imaginary;
		return is;
	}

	friend ostream& operator << (ostream& os, Complex& t) {
		os << t.real << "+" << t.imaginary << "i";
		return os;
	}
};


int main() {
	/*Complex t1(5, 9);
	Complex t2(1, 2);*/
	Complex t1;
	Complex t2;
	cin >> t1;
	cin >> t2;

	//t1.get_complexnumber();
	//t2.get_complexnumber();
	Complex c1 = t1 + t2;
	//c1.get_complexnumber();
	Complex c2 = t1 * t2;
	//c2.get_complexnumber();
	cout << c1 << endl;
	cout << c2 << endl;
	return 0;
}