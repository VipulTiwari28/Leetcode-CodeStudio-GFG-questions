#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int i=0,diff=(-1);
        while(diff<0)
        {
            if(i!=nums.size())
            {
                diff = nums[i]-target;
                i++;
            }
            else
            {
                return i;
            }
        }
        return (i-1);
    }
};