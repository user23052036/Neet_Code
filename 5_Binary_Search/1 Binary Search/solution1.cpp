#include<bits/stdc++.h>
using namespace std;


class Solution 
{
    public:

        int recursive_bs(vector<int> &nums, int low, int high, int k)
        {
            int mid = (low+high)/2;
            if(nums[mid] == k)
                return mid;

            if(low>=high)
                return -1;

            if(nums[mid] > k)
                return recursive_bs(nums,low,mid-1,k);
            else
                return recursive_bs(nums,mid+1,high,k);
        }

        int search(vector<int> &nums, int target) 
        {
            return recursive_bs(nums,0,nums.size()-1,target);
        }
};
