/** Print the factorial of a given number */

#include <iostream>

using namespace std;

int main()
{
    cout << "Enter n: ";
    int n;
    cin >> n;

    long f = 1;
    for (long i = 1; i <= n; i++) f *= i;
    cout << "Factorial: " << f;
    
    return 0;
}