/** Print the first 'n' Fibonacci numbers */

#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;

    int fibonacci[n];

    fibonacci[0] = fibonacci[1] = 1;

    for (int i = 2; i <= n; i++)
        fibonacci[i] = fibonacci[i-1] + fibonacci[i-2];

    cout << "The first " << n << " Fibonacci numbers are:" << endl;

    for(int i = 0; i<n; i++)
        cout << fibonacci[i] << " ";
    cout << endl;
    
    return 0;
}
