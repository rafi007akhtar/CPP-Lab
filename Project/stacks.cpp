/** PROJECT PROGRAM:
 * Implement a program to implement stacks using inhertiance
 */

#include "helper.hpp"

int main()
{
    int size;
    cout << "Enter size of the stack: ";
    cin >> size;

    cin.ignore(); // ignore leftover characters (particularly '\n') in the input stream

    string name;
    cout << "Enter stack name: ";
    getline(cin, name);

    Stack stack(size);
    stack.setName(name);

    cout << stack.getName() << " is now created." << endl;

    int choice;
    while(1)
    {
        cout << "\nMENU \n----- \n1. Push \n2. Pop \n3. Peek \n4. Display \n-1 Exit \nYour choice: " ;
        cin >> choice;

        if (choice == -1) break;

        int val;

        switch(choice)
        {
            case 1:
                cout << "Enter value to push: ";
                cin >> val;
                val = stack.push(val);
                if (val == 0) cout << "Value pushed successfully" << endl;
                else cout << "Error: Stack Overflow" << endl;
                break;
            
            case 2:
                val = stack.pop();
                if (val == -1) cout << "Error: Stack Underflow" << endl;
                else cout << "Value popped: " << val << endl;
                break;

            case 3:
                val = stack.peek();
                if (val == -1) cout << "Error: Stack Empty" << endl;
                else cout << "Value at top: " << val << endl;
                break;

            case 4:
                cout << "Stack name: " << stack.getName() << endl;
                cout << "Stack contents: \n";
                stack.display();
                break;
            
            default:
                cout << "Error: Wrong choice entered" << endl;
        }
    }

    return 0;
}