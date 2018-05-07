#include <iostream>

using namespace std;

class complex
{
    int re, im;

public:
    complex();
    complex(int, int);
    complex operator + (complex);
    void display();
};

complex::complex() { re = im = 0;}
complex::complex(int re, int im)
{
    this->re = re;
    this->im = im;
}
complex complex::operator + (complex c1)
{
    complex c;
    c.re = this->re + c1.re;
    c.im = this->im + c1.im;
}

void complex::display()
{
	cout << "(" << re << " + i" << im << ")"; 
}

int main()
{
	int a, b;
	
	cout << "Enter real and img parts of number 1: ";
	cin >> a >> b;
	complex c1(a,b);
	
	cout << "Enter real and img parts of number 2: ";
	cin >> a >> b;
	complex c2(a,b);
	
	complex c3 = c1 + c2;
	c1.display();
	cout << " + ";
	c2.display();
	cout << " = ";
	c3.display();
	cout << endl;
	
	return 0;
}
