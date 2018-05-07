/** Divide two numbers and print the result. In case the denominator is 0, throw and exception */

#include <iostream>
using namespace std;

float div (float f1, float f2)
{
    if (f2 == 0)
        throw "Cannot divide by zero\n";
    else return f1 / f2;
}

int main()
{
    cout << "Enter two numbers: ";
    float f1, f2;
    cin >> f1 >> f2;

    try 
    {
        float res = div(f1, f2);
        cout << f1 << " / " << f2 << " = " << res;
    }
    catch (const char *msg)
    {
        cerr << msg;
    }

    return 0;
}
