
#include<bits/stdc++.h>
using namespace std;


class Solution 
{
    public:

        vector<int>ds;
        vector<vector<int>>result;

        void recursive_subset_store(vector<int> &nums,int index)
        {
            if(index >= nums.size())
            {
                result.emplace_back(ds);
                return;
            }

            ds.emplace_back(nums[index]);
            recursive_subset_store(nums,index+1);
            ds.pop_back();

            recursive_subset_store(nums,index+1);
        }

        vector<vector<int>> subsets(vector<int>& nums) 
        {
            recursive_subset_store(nums,0);  
            return result;  
        }
};
