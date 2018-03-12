/** 
 Define three functions:
 * void input() -> input three variables
 * void process() -> perform addition and subtraction
 * void display() -> display results
 Write a main() function to call the above functions
*/

#include <iostream>

using namespace std;

int var1, var2, var3;
void input();
void process();
void display(int, int);

int main()
{
    cout << "Enter three numbers: ";
    input();
    process(); // process() calls  display()

    return 0;
}

void input()
{
    cin >> var1 >> var2 >> var3;
}

void process()
{
    int sum = var1 + var2 + var3;
    
    int temp = (var1 >= var2) ? var1 - var2 : var2 - var1;
    int diff = (temp >= var3) ? temp - var3 : var3 - temp;

    display(sum, diff);
}

void display(int sum, int diff)
{
    cout << "Sum: " << sum << "\nDifference: " << diff << endl;
}