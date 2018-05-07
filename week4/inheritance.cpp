#include <iostream>
#include <string>
#include <cstdio>

using namespace std;

int id_count = 0;

class Staff
{
    string name;
    int id;

public:
    void setter(string name);

    int getId() { return id; }

    void display()
    {
        cout << "Staff id: " << id << endl;
        cout << "Staff name: " << name << endl;
    }
};

void Staff::setter(string name)
{
	this->name = name;
	id = ++id_count;
}


class Teacher : public Staff
{
    string subject;
    int nPub; // number of publications
    int salary;
public:
    void setter(string name, string subject, int nPub, int salary)
    {
		Staff::setter(name);
        this->subject = subject;
        this->nPub = nPub;
        this->salary = salary;
    }

    void display()
    {
        Staff::display();
        cout << "Teacher's subject: " << subject << endl;
        cout << "Teacher's salary: " << salary << endl;
        cout << "Number of publications: " << nPub << endl;
    }
};


class Clerk : public Staff
{
    int wage;

public:
    void setter(string name, int wage)
    {
		Staff::setter(name);
        this->wage = wage;
    }

    void display()
    {
        Staff::display();
        cout << "Clerk's wage: " << wage << endl;
    }
};


class Bonus : public Teacher
{
    // Assuming this class is for a bonus teacher who shares the subject with the actual teacher
    string bName; // bonus teacher name

public:
    void setter(string name, string bName, string subject, int nPub, int salary)
    {
		Teacher::setter(name, subject, nPub, salary);
        this->bName = bName;
    }

    void display()
    {
        Teacher::display();
        cout << "Bonus teacher: " << bName << endl;
    }
};


int main()
{
	// staff
	string name;

	// teacher
	string subject;
    int nPub; 
    int salary;

	// clerk
	int wage;

	// bonus
	string bName;

	// objects
	Staff staff1;
	Teacher teacher1;
	Clerk clerk1;
	Bonus bonus1;

	cout << "Enter your choice: \n1 for Staff \n2 for Teacher \n3 for Clerk \n4 for Bonus teacher \nYour choice: ";
	int ch;
	cin >> ch;

	switch (ch)
	{
		case 1:
			cin.ignore();
			fflush(stdin);

			cout << "Enter staff name: ";
			getline (cin, name);

			staff1.setter(name);
			cout << "STAFF DETAILS \n----------" << endl;
			staff1.display();

			fflush(stdin);
			cout << endl;
			break;
		
		
		case 2:
			cin.ignore();
			fflush(stdin);

			cout << "Enter teacher's name: ";
			getline(cin, name);
			fflush(stdin);

			cout << "Enter teacher's subject: ";
			getline(cin, subject);
			fflush(stdin);

			cout << "Enter number of pulications: ";
			cin >> nPub;
			fflush(stdin);

			cout << "Enter salary: ";
			cin >> salary;
			fflush(stdin);

			teacher1.setter(name, subject, nPub, salary);
			cout << "TEACHER DETAILS \n------------" << endl;
			teacher1.display();

			break;

		case 3:
			cin.ignore();
			fflush(stdin);

			cout << "Enter clerk's name: ";
			getline(cin, name);
			fflush(stdin);
			
			cout << "Enter clerk's wage: ";
			cin >> wage;
			fflush(stdin);

			clerk1.setter(name, wage);
			cout << "CLERK DETAILS \n------------" << endl;
			clerk1.display();

			break;
		
		case 4:
			cin.ignore();
			fflush(stdin);
			
			cout << "Enter bonus teacher's name: ";
			getline(cin, bName);
			fflush(stdin);

			cout << "Enter actual teacher's name: ";
			getline(cin, name);
			fflush(stdin);

			cout << "Enter subject: ";
			getline(cin, subject);
			fflush(stdin);

			cout << "Enter number of publications of actual teacher: ";
			cin >> nPub;
			fflush(stdin);

			cout << "Enter actual teacher's salary: ";
			cin >> salary;
			fflush(stdin);

			bonus1.setter(name, bName, subject, nPub, salary);
			cout << "DETAILS \n------------\n";
			bonus1.display();

			break;
		
		default:
			cout << "Wrong choice\n" << endl;
	}

    return 0;
}

