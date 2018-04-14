/** Check if or not a number is armstrong */

#include <iostream>
#include <cmath>

using namespace std;

int digits(int n)
{
    /** Return the number of digits in a number */

    int dig = 0;
    while (n != 0)
    {
        dig ++;
        n /= 10;
    }

    return dig;
}

bool isArmstrong(int n)
{
    int dig = digits(n);

    int arm = 0, temp = n;
    while (temp > 0)
    {
        int rem = temp % 10;
        arm += (int)pow(rem, dig);
        temp /= 10;
    }

    return (arm == n);
}

int main()
{
    cout << "Enter n: ";
    int n;
    cin >> n;
    isArmstrong(n) ? cout << n << " is armstrong" : cout << n << " is not armstrong";
    return 0;
}