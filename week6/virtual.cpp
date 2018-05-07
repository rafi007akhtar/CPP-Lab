/** Program to illustrate abstract class */

#include <iostream>
#include <cstdio>

using namespace std;

class Shape
{
    string shapeName;

public:
    Shape(string);
    string getName();
    virtual int getArea() = 0; // pure virtual func -- making this class abstract
};

Shape::Shape(string shapeName)
{
    this->shapeName = shapeName;
}

string Shape::getName() { return shapeName; }

class Square : public Shape
{
    int side;

public:
    Square(string, int);
    int getArea(); // definition will be given in this derived class
};

Square::Square(string name, int side) : Shape(name)
{
    this->side = side;
}

int Square::getArea() { return side * side; }

int main()
{
    cout << "Enter shape name: ";
    string name;
    fflush(stdin);
    getline(cin, name);

    cout << "Enter square side: ";
    int s;
    cin >> s;

    Square sq(name, s);

    cout << "Area of " << sq.getName() << " = " << sq.getArea();

    return 0;
}