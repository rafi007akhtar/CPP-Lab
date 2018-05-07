// Create an array of objects for 5 students: names, marks of 5 subjects, avg marks
// Display names and avg marks

#include <iostream>
#include <string>

using namespace std;

class students
{
	string name;
	int scores[5];
	float avg;
	
	public: 
		void getname()
		{
			fflush(stdin);
			getline(cin, name);
			fflush(stdin);
		}
		
		void getscores()
		{
			for (int i = 0; i < 5; i++)
				cin >> scores[i];
		}
		
		void display()
		{
			float sum = 0;
			cout << "Name: " << name << endl;
			
			for (int i = 0; i < 5; i++) sum += scores[i];
			avg = sum / 5.0;
			
			cout << "Average: " << avg << endl << endl;
			
		}
};

int main()
{
	students s[5];
	
	for (int i = 0; i < 5; i++)
	{
		cout << endl;
		fflush(stdin);
		
		cout << "Enter name of student " << i + 1 << ": ";
		s[i].getname();
				
		cout << "Enter scores of student " << i + 1 << ": "; 
		s[i].getscores();
		
	}
	
	cout << "\nDETAILS OF STUDENTS \n------" << endl;
	for (int i = 0; i < 5; i++)
		s[i].display();

	return 0;
}
