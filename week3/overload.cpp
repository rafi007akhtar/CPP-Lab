/**
Demonstrate function overloading:
void show(int) -> print sqaure of the input
void show(int, int) -> print sum of the inputs
void show(float, float) -> print difference b/w the inputs
*/

#include <iostream>

using namespace std;

void show(int x) { cout << x << " squared = " << x*x << endl; }

void show(int x, int y) 
{ 
    cout << x << " + " << y << " = " << x+y << endl; 
}

void show(float x, float y) 
{ 
    cout << x << " - " << y << " = " << x-y << endl; 
}

int main()
{
    cout << "Enter an integer: ";
    int n;
    cin >> n;
    show (n);

    cout << "Enter two integers: ";
    int m;
    cin >> n >> m;
    show (n, m);

    cout << "Enter two floats: ";
    float a, b;
    cin >> a >> b;
    show (a, b);

    return 0;
}

