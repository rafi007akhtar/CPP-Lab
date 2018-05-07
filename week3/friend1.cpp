/**
 * Demonstrate friend functions
 * Class name: Distance
 * public: Distance(int) -> default constructor
 * private: meter
 * friend int add (Distance, Distance)
*/

#include <iostream>

using namespace std;

class Distance
{
    int meter;

public:
    Distance(int);
    friend int add (Distance, Distance); // to access the private member of class Distance
};

Distance::Distance(int meter) 
{ 
    this->meter = meter; 
}

int add (Distance d1, Distance d2)
{
    return d1.meter + d2.meter;
}

int main()
{
    cout << "Enter two distances: ";
    int a, b;
    cin >> a >> b;
    Distance d1(a);
    Distance d2(b);
    cout << "Sum: " << add(d1, d2);
    return 0;
}
