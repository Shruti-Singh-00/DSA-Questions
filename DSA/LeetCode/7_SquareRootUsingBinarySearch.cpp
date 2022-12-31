/*Given a non-negative integer x, return the square root of x rounded down to the nearest integer. 
The returned integer should be non-negative as well.

You must not use any built-in exponent function or operator.
For example, do not use pow(x, 0.5) in c++ or x ** 0.5 in python. 

Example 1:
Input: x = 4
Output: 2
Explanation: The square root of 4 is 2, so we return 2.

Example 2:
Input: x = 8
Output: 2
Explanation: The square root of 8 is 2.82842..., 
and since we round it down to the nearest integer, 2 is returned.*/

#include<bits\stdc++.h>
using namespace std;

class Solution {
public:
               // **************** MY SOLUTION ************** (Time limit exceeded)
    // int mySqrt(int x) {
    //     int start = 1;
    //     int end = x;
    //     long long int mid = start + (start + end)/2;
    //     long long int ans = -1;

    //     while(start <= end)
    //     {
    //         long long int sq = mid*mid;
    //         if(sq == x)
    //         {
    //             ans = mid;
    //         }

    //         else if(sq < x)
    //         {
    //             ans = mid;
    //             start = mid + 1;
    //         }

    //         else
    //         {
    //             end = mid - 1;
    //         }

    //         mid = start + (start + end)/2;
    //     }
    //     return ans;
    // }
              // ************ Better Solution *************
    int mySqrt(int x) {
        
        if(x == 1)
            return 1;

        int start = 1, end = x/2; 

        while(start <= end)
        {
            int mid = (start+end)/2;

            if(mid == x/mid)
                return mid;

            else if(mid < x/mid)
                start = mid+1;

            else
                end = mid-1;
        }
        
        return end;
    }
};

int main()
{
    
    return 0;
}