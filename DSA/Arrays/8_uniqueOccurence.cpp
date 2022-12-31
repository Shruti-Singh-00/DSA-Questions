/*Given an array of integers arr, 
return true if the number of occurrences of each value in the array is unique or false otherwise.

Example 1:
Input: arr = [1,2,2,1,1,3]
Output: true
Explanation: The value 1 has 3 occurrences, 2 has 2 and 3 has 1. 
No two values have the same number of occurrences.

Example 2:
Input: arr = [1,2]
Output: false

Example 3:
Input: arr = [-3,0,1,-3,1,1,1,-3,10,0]
Output: true*/

#include<bits\stdc++.h>
using namespace std;
 
bool uniqueOccurrences(vector<int>& arr) {
        vector<int> freq;
        for(int i = 0; i != arr.size(); i++ )
        {
            int count = 1;
            for(int j = i+1; j != arr.size(); j++ )
            {
                if(arr[i] != -1 && arr[i] == arr[j])
                {
                    count++;
                    arr[j] = -1;
                }
            }

            if (arr[i] != -1)
            {
                freq.push_back(count);
            }
        }

        for(int i = 0; i < freq.size(); i++ )
        {
            for(int j = i+1; j < freq.size(); j++ )
            {
                if(freq[i] != 0 && freq[i] == freq[j])
                {
                    return false;
                }
            }
        }
        return true;
}

int main()
{
    vector<int> arr = {1,2,2,1,1,3};
    cout << uniqueOccurrences(arr) << endl;
    
    return 0;
}