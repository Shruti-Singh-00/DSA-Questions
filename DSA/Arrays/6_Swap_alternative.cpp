#include<bits\stdc++.h>
using namespace std;

int swapAlternative(int arr[], int size)
{
    for (int i = 0; i < size; i+=2)
    {
        if (i+1 < size)
        {
            swap(arr[i],arr[i+1]);
        }
    }   
}

int main()
{
    int even[8] = {1,3,4,5,7,8,2,9};
    int odd[5] = {2,6,9,3,5};

    swapAlternative(even,8);
    for (int i = 0; i < 8; i++)
    {
        cout<<even[i] <<endl;
    }

    return 0;
}