#include<bits/stdc++.h>
using namespace std;

class Solution 
{
    public:
        bool isAnagram(string s, string t) 
        {
            if(s.size() != t.size())
                return false;

            unordered_map<char,int>ump1,ump2; 
            for(auto it: s)
                ump1[it]++;
            for(auto it: t)
                ump2[it]++;

            if(ump1 == ump2)
                return true;
            return false; 
        }
};
