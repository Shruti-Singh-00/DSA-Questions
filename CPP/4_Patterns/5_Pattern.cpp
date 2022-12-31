/*
    Enter number of rows : 5
    1 
    2 1 
    3 2 1 
    4 3 2 1 
    5 4 3 2 1 
*/
#include<bits\stdc++.h>
using namespace std;
 
int main()
{
    int n;
    cout << "Enter number of rows : ";
    cin >> n;

    int row = 1;
    while (row <= n)
    {
        int col = 1;
        if (col <= row)
        {
            int temp = row;
            while (col <= row)
            {
                cout << temp << " ";
                temp = temp - 1;
                col = col + 1;
            }
            cout << endl;
            row = row + 1;
        }   
    }
    
    return 0;
}