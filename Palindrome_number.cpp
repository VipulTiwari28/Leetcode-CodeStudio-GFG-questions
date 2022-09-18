#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    bool isPalindrome(int x)
    {
        vector<int> arr;
        if (x >= 0)
        {
            while ((x) >= 1)
            {
                int left = x % 10;
                int t = x - left;
                int s = t / 10;
                arr.push_back(left);
                x = s;
            }
            int midVal = arr.size() / 2;
            int count = 0;
            for (int i = 0; i < midVal; i++)
            {
                if (arr[i] == arr[arr.size() - (i + 1)])
                {
                    count++;
                }
            }
            if (midVal == count)
            {
                return 1;
            }
            else
            {
                return 0;
            }
        }
        else
        {
            return 0;
        }
    }
};