/*
    using unordered_map
    analysing time and space complexity
    time complexity:----
    O(N)-> insertion into map
    O(N)-> worst case getting false at the end of unordered-map
    O(N)-> ump.clear()
    total-> 3*O(N)

    space complexity:----
    O(N)-> worst case for the map if all th elements are different

*/
#include<bits/stdc++.h>
using namespace std;

class Solution 
{
    public:
        bool hasDuplicate(vector<int> &nums) 
        {
            unordered_map<int,int>ump;
            for(int i=0; i<nums.size(); i++)
                ump[nums[i]]++;
            
            for(auto it: ump)
            {
                if(it.second > 1)
                    return true;
            }
            ump.clear();
            return false;
        }
};
