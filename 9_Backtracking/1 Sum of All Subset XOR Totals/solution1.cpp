

#include<bits/stdc++.h>
using namespace std;

class Solution 
{
    public:
        int subsetXORSum(vector<int>& nums) 
        {
            int no_of_subset = 1<<nums.size();
            int size = nums.size();
            int sum=0;

            for(int num=0; num<no_of_subset; num++)
            {
                vector<int>subset;
                for(int BitIndex=0; BitIndex<size; BitIndex++)
                {
                    if(num & (1<<BitIndex))             //if bit is set put the index of the 
                        subset.emplace_back(nums[BitIndex]); //number in subset vector
                }
                int XOR=0;
                for(int i=0; i<subset.size(); i++)
                    XOR = XOR ^ subset[i];
                sum += XOR;
            }
            return sum;
        }
};