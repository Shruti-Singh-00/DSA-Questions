/*
    Enter number of rows : 6
    1 
    2 2 
    3 3 3 
    4 4 4 4 
    5 5 5 5 5 
    6 6 6 6 6 6 
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
            while (col <= row)
            {
                cout << row << " ";
                col = col + 1;
            }
            cout << endl;
            row = row + 1;
        }   
    }
    
    return 0;
}