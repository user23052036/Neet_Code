/*
    using unordered_map
    analysing time and space complexity
    time complexity:----
    O(logN)-> sort
    O(N)-> worst case getting false at the end of unordered-map
    total-> O(NlogN)

    space complexity:----
    total-> O(1)

*/
#include<bits/stdc++.h>
using namespace std;

class Solution 
{
    public:
        bool hasDuplicate(vector<int> &nums) 
        {
            sort(nums.begin(),nums.end());
            for(int i=0; i<nums.size()-1; i++)
            {
                if(nums[i] == nums[i+1])
                    return true;
            }
            return false;
        }
};
