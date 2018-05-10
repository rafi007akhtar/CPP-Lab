/** Design a simple calculator (addition, subtraction, multiplication, division) using static method and switch case in C++. */

#include <iostream>
using namespace std;

class Calc
{
public:
    static int add(int a, int b) { return a + b; }
    static int sub(int a, int b) { return (a > b) ? (a - b) : (b - a); }
    static int mul(int a, int b) { return a * b; }
    static float div(int a, int b) { return (a * 1.0) / b; }
};

int main()
{
    cout << "Enter two numbers: ";
    int a, b;
    cin >> a >> b;

    cout << "Enter your choice: \n1 for add \n2 for subtract \n3 for multiply \n4 for divide \nYour choice: ";
    int ch;
    cin >> ch;

    switch(ch)
    {
        case 1:
            cout << "Sum: " << Calc::add(a, b) << endl;
            break;

        case 2:
            cout << "Difference: " << Calc::sub(a, b) << endl;
            break;
        
        case 3:
            cout << "Product: " << Calc::mul(a, b) << endl;
            break;
        
        case 4:
            cout << "Division: " << Calc::div(a, b) << endl;
            break;
        
        default:
            cout << "Invalid operation" << endl;
        
    }
}
