/*Problem Statement
Suggest Edit
You are given an array ‘ARR’ of size ‘N’ containing each number between 1 and ‘N’ - 1 at least once. 
There is a single integer value that is present in the array twice. 
Your task is to find the duplicate integer value present in the array.

For example:
Consider ARR = [1, 2, 3, 4, 4], the duplicate integer value present in the array is 4. 
Hence, the answer is 4 in this case.

Sample Input 1:
2
5
4 2 1 3 1
7
6 3 1 5 4 3 2
Sample Output 1:
1
3
Explanation Of Sample Input 1:
For the first test case, 
The duplicate integer value present in the array is 1. Hence, the answer is 1 in this case.
*/

               // *************** Coding Ninjas *****************

#include<bits\stdc++.h>
using namespace std;

int findDuplicate(vector<int> &arr) 
{
    int ans = 0;
    for(int i = 0; i != arr.size(); i++)
    {
        ans = ans^arr[i];
    }
    
    for(int i = 0; i != arr.size(); i++)
    {
        ans = ans^i;
    }
    
    return ans;
}

int main()
{
    vector<int> arr = {1,2,3,4,5,6,7,7};
    cout << findDuplicate(arr) << endl;
    
    return 0;
}