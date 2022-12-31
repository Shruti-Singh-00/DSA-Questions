/*Given an integer n, return true if it is a power of two. Otherwise, return false.

An integer n is a power of two, if there exists an integer x such that n == 2x.

Example 1:

Input: n = 1
Output: true
Explanation: 20 = 1
*/
#include<bits\stdc++.h>
using namespace std;

// My solution...
class Solution {                 
public:
    bool isPowerOfTwo(uint64_t n) {
        int count = 0;
        while(n != 0)
        { 
            if (n&1)          // comparing last bit..
            {
                count++;
            }
            n = n >> 1;
        }
        if(count == 1)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
};

/* better solution..

Now consider :-
bit representation of 7  -> 0111
bit representation of 8  -> 1000
bitwise AND of 7 and 8 -> 0000
we are gonna use this property for for all numbers which are powers of two

class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n<=0) return false;
        return ((n&(n-1))==0);      // using above example..
    }
};
*/
 
int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;

    Solution s;
    cout << s.isPowerOfTwo(num);
    
    return 0;
}