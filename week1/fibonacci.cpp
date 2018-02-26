#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;
    cout << "The first " << n << " Fibonacci numbers are:" << endl;

    int a = 1, b = 1, c;
    cout << a << endl << b << endl;
    for (int i = 1; i <= n; i++)
    {
        c = a + b;
        cout << c << endl;
        a = b;
        b = c;
    }

    return 0;
}