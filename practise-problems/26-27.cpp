/** PROBLEM STATEMENT
Sort an array using bubble sort using friend function.
Search an element in the sorted array obtained above using friend function (use binary search).
*/

#include <iostream>
using namespace std;

class Sort
{
    int arr[10];

public:
    void setter()
    {
        for (int i = 0; i < 10; i++)
            cin >> arr[i];
    }

    void display()
    {
        for (int i = 0; i < 10; i++)
            cout << arr[i] << " ";
        cout << endl;
    }

    friend void sort(Sort&);
    friend bool search(Sort, int);
};

void sort(Sort& ob)
{
    for (int i = 0; i < 9; i++)
    {
        for (int j = i+1; j < 10; j++)
        {
            if (ob.arr[i] > ob.arr[j])
            {
                int temp = ob.arr[i];
                ob.arr[i] = ob.arr[j];
                ob.arr[j] = temp;
            }
        }
    }
}

bool search(Sort ob, int key)
{
    int low = 0, up = 9;

    do {
        int mid = (low + up) / 2;
        int val = ob.arr[mid];
        if (val == key)
            return true;
        if (key > val) low = mid + 1;
        else up = mid - 1;
    } while (low <= up);
    
    return false;
}

int main()
{
    Sort ob;
    cout << "Enter 10 elements: ";
    ob.setter();

    sort(ob);
    // ob.display();

    cout << "Enter key to search: ";
    int key;
    cin >> key;
    bool res = search(ob, key);
    
    (res) ? cout << "Element present\n" : cout << "Element not present\n";

    return 0;
}
