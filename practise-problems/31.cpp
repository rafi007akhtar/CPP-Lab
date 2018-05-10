/** PROBLEM STATEMENT
Create a class area and a class cost. Create a subclass of area and cost, refer it as rectangle. Using multiple inheritance calculate the area of a rectangle and then calculate the cost to cover the area by a carpet (covering cost=1000*area).
*/

#include <iostream>

using namespace std;

class Area
{
public:
    int rectArea(int l, int b) { return l * b; }
};

class Cost
{
public:
    int calcCost(int area) { return 1000 * area; }
};

class Rectangle: public Area, public Cost
{
    int len, br;

public:
    Rectangle(int len, int br)
    {
        this->len = len;
        this->br = br;
    }

    void display()
    {
        int area = rectArea(len, br);
        int cost = calcCost(area);
        cout << "Covering cost: " << cost << " INR" << endl;
    }
};

int main()
{
    cout << "Enter rectangle length and breadth: ";
    int l, b;
    cin >> l >> b;
    
    Rectangle rect(l,b);
    rect.display();
    
    return 0;
}
