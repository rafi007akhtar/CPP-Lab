/** Check if or not a number is prime */

#include <iostream>

using namespace std;

bool isPrime(int n)
{
    if (n < 2) return false;
    if (n == 2) return true;
    if (n%2 == 0) return false;

    int half = n / 2;
    for (int i = 3; i <= half; i++)
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