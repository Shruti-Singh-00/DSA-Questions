/*Given an array, rotate the array to the right by k steps, where k is non-negative.

Example 1:
Input: nums = [1,2,3,4,5,6,7], k = 3
Output: [5,6,7,1,2,3,4]
Explanation:
rotate 1 steps to the right: [7,1,2,3,4,5,6]
rotate 2 steps to the right: [6,7,1,2,3,4,5]
rotate 3 steps to the right: [5,6,7,1,2,3,4]


Example 2:
Input: nums = [-1,-100,3,99], k = 2
Output: [3,99,-1,-100]
Explanation: 
rotate 1 steps to the right: [99,-1,-100,3]
rotate 2 steps to the right: [3,99,-1,-100]*/
#include<bits\stdc++.h>
using namespace std;

void rotate(vector<int>& nums, int k) {
    vector<int> ans(nums.size());
    int i = 0, j = k, l = 0, m = k;

    while(k > nums.size()){
        j = (k-nums.size());
        k = j;
        m = j;
    }

    while(i < nums.size() || j > 0) 
    {
        if (j>0)
        {
            ans[i] = nums[nums.size()-(j)];
            j--;
            i++;
        }
        else if(l < nums.size()-m)
        {
            ans[i] = nums[l];
            i++;
            l++;
        }   
    }

    nums = ans; 
}

int main()
{
    vector<int> nums = {1,2,3,4,5,6,7};
    rotate(nums,3);
    for (int i = 0; i < nums.size(); i++)
    {
        cout<<nums[i]<<" ";
    }

    return 0;
}