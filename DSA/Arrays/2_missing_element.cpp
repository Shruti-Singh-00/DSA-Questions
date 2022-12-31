#include<bits\stdc++.h>
using namespace std;

class Array
{
private:
    int *A;
    int size;
    int length;
public:
    Array(int s);
    ~Array();
    display();
    insert(int index, int x);
    single_missing();
    multiple_missing();
};

Array::Array(int s)
{
    size = s;
    length = 0;
    A = new int[size];
}

Array::~Array()
{
    delete []A;
}

Array::display()
{
    for (int i = 0; i < length; i++)
    {
        cout << A[i] << " ";
    }
    cout << endl;
}

Array::insert(int index, int x)
{
    if (index >= 0 && index < size)
    {
        for (int i = length - 1; i > index; i--)
        {
            A[i + 1] = A[i];
        }
        A[index] = x;
        length++;
    }
}

Array::single_missing()
{
    int diff = A[0];
    for (int i = 0; i < length; i++)
    {
        if (A[i] - i != diff)
        {
            cout << "Missing element found : " << i + diff << endl;
            break;
        }   
    }
}

Array::multiple_missing()
{
    int diff = A[0];
    for (int i = 0; i < length; i++)
    {
        if (A[i] - i != diff)
        {
            cout << "Missing element found : " ;
            while(diff < A[i] - 1)
            {
                cout << i + diff << endl;
                diff++;
            }
        }   
    }
}

int main()
{
    Array arr(10);

    arr.insert(0, 1);
    arr.insert(1, 2);
    arr.insert(2, 4);
    arr.insert(3, 5);
    arr.insert(4, 7);
    arr.insert(5, 8);

    arr.display();
    
    arr.multiple_missing();

    return 0;
}