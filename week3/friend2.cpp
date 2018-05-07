/** Find greatest b/w two numbers using frined function */

#include <iostream>

using namespace std;

class Compare
{
    int num1, num2;

public:
    void setter (int, int);
    friend int max(Compare);
};

void Compare::setter (int num1, int num2)
{
    this->num1 = num1;
    this->num2 = num2;
}

int max(Compare ob) 
{ 
    return (ob.num1 > ob.num2) ? ob.num1 : ob.num2; 
}

int main()
{
    cout << "Enter two numbers: ";
    int a, b;
    cin >> a >> b;

    Compare ob;
    ob.setter(a, b);

    cout << "Max = " << max(ob);

    return 0;
}
