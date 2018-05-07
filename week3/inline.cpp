/** Use inline functions to multiply two numbers and return square of another */

#include <iostream>

using namespace std;

inline int prod (int a, int b) { return a*b; }

inline int square(int x) { return x*x; }

int main()
{
    cout << "Enter two numbers: ";
    int a, b;
    cin >> a >> b;
    cout << a << " x " << b << " = " << prod(a,b) << endl;

    cout << "Enter a number: ";
    cin >> a;
    cout << a << " squared = " << square(a);

    return 0;
}
