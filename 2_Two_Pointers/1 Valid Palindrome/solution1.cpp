#include<bits/stdc++.h>
using namespace std;


class Solution 
{
    public:
        bool isPalindrome(string s) 
        {
            int size = s.size(),count=0;
            int half_size = size/2;

            string str;
            for(int i=0; i<size; i++)
            {
                if((s[i]>='A'&&s[i]<='Z') || (s[i]>='a'&&s[i]<='z'))
                    str[count++]=s[i];
            }

            for(int i=0; i<half_size; i++)
            {
                if(str[i] != str[size-i])
                    return false;
            }
            return true;
        }
};
