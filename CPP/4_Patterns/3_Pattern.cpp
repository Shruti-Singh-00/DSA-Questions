/*
    Enter number of rows : 4
    1 
    2 3 
    4 5 6 
    7 8 9 10 
*/
#include<bits\stdc++.h>
using namespace std;
 
int main()
{
    int n;
    cout << "Enter number of rows : ";
    cin >> n;

    int row = 1;
    int temp = 1;
    while (row <= n)
    {
        int col = 1;
        if (col <= row)
        {
            while (col <= row)
            {
                cout << temp << " ";
                temp = temp + 1;
                col = col + 1;
            }
            cout << endl;
            row = row + 1;
        }   
    }
    
    return 0;
}