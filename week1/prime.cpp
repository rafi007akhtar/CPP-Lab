/** Check if or not a number is prime */

#include <iostream>
#include <math.h>

using namespace std;

bool isPrime(int n)
{
    if (n < 2) return false;

    int square_root = sqrt(n);
    for (int i = 2; i <= square_root; i++)
        if (n%i == 0) return false;

    return true;
}

int main()
{
    cout << "Enter n: ";
    int n;
    cin >> n;
    isPrime(n) ? cout << n << " is prime" : cout << n << " is non-prime";
    return 0;
}
