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
                if(isalnum(s[i]))
                    str.push_back(tolower(s[i]));
            }

            int new_size=str.size();
            int new_half_size = new_size/2;

            for(int i=0; i<new_half_size; i++)
            {
                if(str[i] != str[new_size-1-i])
                    return false;
            }
            return true;
        }
};

/*
The reason str[count++] = tolower(s[i]); does not work as expected in your code 
is due to the fact that str is initially an empty string and does not have 
allocated space for count characters. When you try to assign a value to str[count], 
it goes out of the current bounds of the string, leading to undefined behavior.
*/
