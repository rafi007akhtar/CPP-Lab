/** Find the area and perimeter of a rectangle using constructor */

#include <iostream>

using namespace std;

class Rectangle
{
    private:
        int length, breadth;

    public:
        Rectangle(int l, int b): length(l), breadth(b) {} 

        int area() { return length * breadth; }

        int perimeter() { return 2 * (length + breadth); }
};

int main()
{
    int l, b;
    cout << "Enter length and breadth of the rectangle: ";
    cin >> l >> b;

    Rectangle rekt(l, b);
    cout << "Area: " << rekt.area() << " sq units \nPerimeter: " << rekt.perimeter() << " units\n";

    return 0;
}