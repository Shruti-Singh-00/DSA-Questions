// #include <iostream>

// using namespace std;

// int main()
// {
//     int arr[3][3];
//     for (int i = 0, j = 0; i < 3; j++)
//     {
//         if (j == 3)
//         {
//             i++;
//             j = 0;

//             if (i == 3)
//             {
//                 break;
//             }
//         }
//         cin >> arr[i][j];
//     }
//     for (int i = 0, j = 0; i < 3; j++)
//     {
//         if (j == 3)
//         {
//             i++;
//             j = 0;
//         }

//         if (i == 3)
//         {
//             break;
//         }

//         cout << arr[i][j] << "\n";
//     }
// }

/*  name, 5 subject marks, average marks ...
    
*/

// C++ program to print all distinct elements in a given array
#include <bits/stdc++.h>
using namespace std;
 
void printDistinct(int arr[], int n)
{
    // Pick all elements one by one
    for (int i=0; i<n; i++)
    {
        // Check if the picked element is already printed
        int j,sum;
        for (j=0; j<i; j++)
           if (arr[i] == arr[j])
               break;
 
        // If not printed earlier, then print it
        if (i == j)
        {
            cout << arr[i] << endl;
        }
    }
}
 
// Driver program to test above function
int main()
{
    int arr[] = {6, 10, 5, 120, 9, 120, 4, 6, 10};
    int n = sizeof(arr)/sizeof(arr[0]);
    printDistinct(arr, n);
    return 0;
}