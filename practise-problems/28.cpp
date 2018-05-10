/** PROBLEM STATEMENT
Overload operator ‘+’ to produce the sum of the coordinates of two location points, (x1, y1) and (x2, y2) i.e. (x1 + x2, y1 + y2) .
*/

#include <iostream>
using namespace std;

class Point
{
    int x, y;

public:
    Point() { x = y = 0; }

    Point(int x, int y)
    {
        this->x = x;
        this->y = y;
    }

    Point operator + (Point p)
    {
        Point sum;
        sum.x = this->x + p.x;
        sum.y = this->y + p.y;
        return sum;
    }

    void display()
    {
        cout << "(" << x << ", " << y << ")";
    }
};

int main()
{
    cout << "Enter coordinates of point p1: ";
    int x, y;
    cin >> x >> y;
    Point p1(x, y);

    cout << "Enter coordinates of point p2: ";
    cin >> x >> y;
    Point p2(x, y);

    Point p3 = p1 + p2;

    cout << "p1 + p2 = ";
    p3.display();
    cout << endl;

    return 0;
}
