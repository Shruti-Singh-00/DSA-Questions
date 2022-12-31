#include<bits\stdc++.h>
using namespace std;
 
class Array
{
private:
    int *A;
    int size;
    int length;

public:
    Array(int s)
    {
        size = s;
        length = 0;
        A = new int[size];
    }

    display();
    insert(int index, int x);
    duplicate();
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

Array::duplicate()
{
    for (int i = 0; i < length; i++)
    {
        int total = 0;
        for (int j = 0; j < length; j++)
        {
            if (A[i] == A[j])
            {
                cout << i;
                total++;
            }
        }
        cout <<" comes total " << total << " times."<<endl;
    }
}


int main()
{
    Array arr(10);

    arr.insert(0, 1);
    arr.insert(1, 2);
    arr.insert(2, 4);
    arr.insert(3, 4);
    arr.insert(4, 7);
    arr.insert(5, 7);
    arr.insert(6, 7);
    arr.insert(7, 9);
    arr.insert(8, 8);
    arr.insert(9, 9);


    arr.display();
    
    arr.duplicate();
    
    return 0;
}