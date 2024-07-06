#include<bits/stdc++.h>
using namespace std;

class Solution 
{
    public:
        vector<int> countBits(int n) 
        {
            vector<int>result;
            for(int i=0; i<=n; i++)
            {
                int cnt=0,temp=i;
                while(temp != 0)
                {
                    temp = temp & (temp-1);
                    cnt++;
                }
                result.emplace_back(cnt);
            }
            return result;    
        }
};
