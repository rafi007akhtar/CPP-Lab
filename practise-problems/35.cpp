/** Problem statement
Create a class ‘Student’ with attributes name and roll number. Create two subclasses of
‘Student’:
    i) ‘Test’ with attribute marks in six subjects
    ii) ‘Sports’ having attribute marks in sports.
Create a class ‘Result’ that will inherit the corresponding marks from ‘Test’ and ‘Sports’ to calculate the sum of the total marks in six subjects and the sports marks and then
divide it by 7 to show the percentage with the total marks (use virtual base class)
*/

#include <iostream>
#include <string>
#include <cstdio>

using namespace std;

class Student 
{
    int roll;
    string name;

public:
    void setter(int roll, string name)
    {
        this->roll = roll;
        this->name = name;
    }

    void display()
    {
        cout << "Name: " << name << endl << "Roll number: " << roll << endl;
    }
};

class Test: public virtual Student 
{
    int marks[6];

public:
    void setTMarks() 
    {
        for (int i = 0; i < 6; i++)
            cin >> marks[i];
    }

    int* getTMarks() 
    {
        return marks;
    }
};

class Sports: public virtual Student
{
    int marks;

public:
    void setSMarks(int marks) 
    {
        this->marks = marks;
    }

    int getSMarks() 
    {
        return marks;
    }
};

class Result: public Test, public Sports 
{
    float percentage;
public:
    Result(int roll, string name)
    {
        Student::setter(roll, name);
    }

    float getPercentage()
    {
        int sum = 0;
        int *marks = getTMarks(); 
        for (int i = 0; i < 6; i++) sum += marks[i];
        sum += getSMarks();

        return sum / 7.0;
    }
};

int main()
{
    cout << "Enter student name: ";
    string name;
    getline(cin, name);

    fflush(stdin);
    cout << "Enter roll number: ";
    int roll;
    cin >> roll;

    Result stud(roll, name);

    cout << "Enter student marks in 6 subjects: ";
    stud.setTMarks();

    cout << "Enter student sports marks: ";
    int marks;
    cin >> marks;
    stud.setSMarks(marks);

    cout << "\nSTUDENT DETAILS" << endl;
    stud.display();
    cout << "Percentage: " << stud.getPercentage() << " % ";

    return 0;
}
