/** Check if or not a number is armstrong */

#include <iostream>

using namespace std;

int reverse(int n)
{
    /** Return the reverse of a number */

    int rev = 0;
    while (n != 0)
    {
        rev = rev*10 + n%10;
        n /= 10;
    }

    return rev;
}

int main()
{
    cout << "Enter n: ";
    int n;
    cin >> n;
    (n == reverse(n)) ? cout << n << " is palindrome" : cout << n << " is not palindrome";
    return 0;
}