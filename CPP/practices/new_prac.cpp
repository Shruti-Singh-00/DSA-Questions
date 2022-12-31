#include <iostream>
using namespace std;

int countDistinct(int arr[], int n)
{
    int res = 1;
 
    // Pick all elements one by one
    for (int i = 1; i < n; i++) {
        int j = 0;
        for (j = 0; j < i; j++)
            if (arr[i] == arr[j])
                break;
 
        // If not printed earlier, then print it
        if (i == j)
            res++;
    }
    return res;
}

int main()
{
    // test cases and no of elements
    int t, n;
    cin >> t;

    //for loop runs t times
    for (int x = 0; x < t; x++)
    {
        //total no of elements and array formation
        cin >> n;
        int arr[n - 1];
        int odd[n-1];
        int even[n-1];

        int odd_i =0;
        int even_i =0;
        for (int b = 0; b < n; b++)
        {
            cin >> arr[b];
            if (b<n/2)
            {
                odd[odd_i]=arr[b];
                odd_i++;
            }
            else{
                even[even_i]=arr[b];
                even_i++;
            }

            
        }
        
        int n1 = sizeof(odd) / sizeof(odd[0]);
        int a = countDistinct(odd, n1);

        int n2 = sizeof(even) / sizeof(even[0]);
        int b = countDistinct(even, n2);

        if (a==b)
        {
            cout<<"YES"<<endl;
        }
        
        else
        {
            cout<<"NO"<<endl;
        }
        
    }
    return 0;
}