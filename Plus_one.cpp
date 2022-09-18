#include<iostream>
#include<vector>
using namespace std;
class Solution
{
public:
    vector<int> plusOne(vector<int> &digits)
    {
        vector<int> incr;
        int s = digits.size() - 1, i = 1;
        if (digits[s] != 9)
        {
            digits[s] = digits[s] + 1;
        }
        else
        {
            if (digits.size() > 1)
            {
                digits[s] = 0;
                digits[s - 1]++;
                while (digits[s - (i)] > 9 && i != s)
                {
                    digits[s - (i)] = 0;
                    if ((s - (i + 1) >= 0))
                    {
                        digits[s - (i + 1)]++;
                    }
                    else
                    {
                        digits.push_back(1);
                    }
                    i++;
                }
                if (digits[0] == 10)
                {
                    digits[0] = 1;
                    digits.push_back(0);
                }
            }
            else
            {
                digits[0] = 1;
                digits.push_back(0);
            }
        }
        return digits;
    }
};
