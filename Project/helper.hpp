// Helper file for stacks.cpp

#include <iostream>
#include <string>

using namespace std;

class DS
{
    /** Class for data structures in general -- base class */

    string ds_name;

public:
    string getName();
    void setName(string);
};

void DS::setName(string ds_name)
{
    // Parameterized constructor
    this->ds_name = ds_name;
}

string DS::getName() { return ds_name; }


class Stack: public DS
{
    /** Class for stacks -- derived class */

    int size, top, elems[100];

public:
    Stack();
    Stack(int size);
    int push(int elem);
    int pop();
    int peek();
    void display();
};

Stack::Stack() { size = top = -1; }

Stack::Stack(int size)
{
    /** Initilze top and size */
    top = -1;
    this->size = size;
}

int Stack::push(int elem)
{
    /** Push an element onto the top of the stack
     * Return 0 for succes
     * Return -1 for stack overflow
     */

    if (top == size-1) return -1;

    elems[++top] = elem;
    return 0;
}

int Stack::pop()
{
    /** Remove the topmost element from stack, and return it
     * Return -1 in case of stack underflow
     */

    if (top == -1) return -1;

    int temp = elems[top];
    elems[top--] = -1;
    return temp;
}

int Stack::peek()
{
    /** Return topmost stack element
      * Return -1 if stack is empty
    */
    if (top == -1) return -1;
    return elems[top];
}

void Stack::display()
{
    /** Print all elements from stack from the top */

    if (top == -1)
    {
        cout << "Error: stack empty" << endl;
        return;
    }

    for (int i = top; i >= 0; i--)
        cout << elems[i] << endl;
}
