/*Given an integer array nums, move all 0's to the end of it 
while maintaining the relative order of the non-zero elements.

Note that you must do this in-place without making a copy of the array.

Example 1:
Input: nums = [0,1,0,3,12]
Output: [1,3,12,0,0]

Example 2:
Input: nums = [0]
Output: [0]*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void moveZeroes(vector<int>& nums) {
    int j = 0;
    
    // move all the nonzero elements advance
    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] != 0) {
            nums[j++] = nums[i];
        }
    }
    
    for (;j < nums.size(); j++) {
        nums[j] = 0;
        }
}

int main()
{
    vector<int> vec = {0,1,0,3,12};
    moveZeroes(vec);
    for (int i = 0; i < vec.size(); i++)
    {
        cout<<vec[i]<<" ";
    }

    return 0;
}
