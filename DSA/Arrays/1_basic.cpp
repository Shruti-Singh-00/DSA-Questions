#include <iostream>
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
    del(int index);
    append(int x);
    linear_search(int x);
    binary_search(int x);
    get(int index);
    max();
    min();
    sum();
    avg();
    reverse();
    shift();
    rotation();
};

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

Array::del(int index)
{
    if (index >= 0 && index < size)
    {
        for (int i = index; i < length; i++)
        {
            A[i] = A[i + 1];
        }
        cout << endl;
        A[length] = 0;
        length--;
    }
}

Array::append(int x)
{
    A[length] = x;
    length++;
}

Array::linear_search(int x)
{
    for (int i = 0; i < length - 1; i++)
    {
        if (A[i] == x)
        {
            cout << x << " is at index : " << i << endl;
        }
    }
}

Array::binary_search(int x)
{
    int l, h, mid;
    l = 0;
    h = length - 1;

    while (l <= h)
    {
        mid = (l + h) / 2;

        if (x == A[mid])
        {
            cout << x << " is at index : " << mid << endl;
            break;
        }
        
        else if (x < A[mid])
        {
            h = mid- 1;
        }
        
        else
        {
            l = mid +1;
        }
    }

    if (l > h)
    {
        cout<< x << " is not found ..."<<endl;
    }
}

Array::get(int index)
{
    if (index>=0 && index < length)
    {
        cout << A[index] << " is present at index " << index << endl;
    }
}

Array::max()
{
    int max = A[0];
    for (int i = 0; i < length; i++)
    {
        if (A[i] > max)
        {
            max = A[i];
        }
    }
    cout << "Max : " << max << endl;
}

Array::min()
{
    int min = A[0];
    for (int i = 0; i < length; i++)
    {
        if (A[i] < min)
        {
            min = A[i];
        }
    }
    cout << "Min : " << min << endl;
}

Array::sum()
{
    int sum = 0;
    for (int i = 0; i < length; i++)
    {
        sum = sum + A[i];
    }
    return sum;
}

Array::avg()
{
    cout << "Average : " << sum()/length << endl;
}

Array::reverse()
{
    int temp;
    for (int i = 0 , j = length-1 ; i < j ; i++, j--)
    {
        temp = A[i];
        A[i] = A[j];
        A[j] = temp;
    }
}

Array::shift()
{
    for (int i = 0; i < length; i++)
    {
        A[i] = A[i+1];
    }
    length--;
}

Array::rotation()
{
    int temp = A[0];
    for (int i = 0; i < length - 1; i++)
    {
        A[i] = A[i+1];
    }
    A[length-1] = temp;
}

int main()
{
    Array arr(10);

    arr.insert(0, 7);
    arr.insert(1, 2);
    arr.insert(2, 1);
    arr.insert(3, 6);
    arr.insert(4, 5);
    arr.append(4);

    arr.display();

    arr.del(3);

    arr.display();

    arr.linear_search(5);

    arr.binary_search(7);

    arr.get(2);

    arr.max();

    arr.min();

    cout << "Sum : " << arr.sum() << endl;

    arr.avg();

    arr.display(); 

    arr.reverse();

    arr.display();

    arr.shift();

    arr.display();

    arr.rotation();

    arr.display();

    arr.rotation();

    arr.display();

    return 0;
}