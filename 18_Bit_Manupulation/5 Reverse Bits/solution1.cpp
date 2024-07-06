#include<bits/stdc++.h>
using namespace std;


class Solution 
{
    public:
        uint32_t reverseBits(uint32_t n) 
        {
            for(int bit=0; bit<16; bit++)
            {
                bool bit1 = n & 1<<bit;
                bool bit2 = n & 1<<(31-bit);
                
                if(bit1 == bit2)
                    continue;
                else
                {
                    n = n ^ (1<<bit);
                    n = n ^ (1<<(31-bit));
                }
            }
            return n;
        }
};
