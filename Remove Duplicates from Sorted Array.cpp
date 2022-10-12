#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i = nums.size()-1;
        while(i>0)
        {
            if(nums[i]==nums[i-1])
            {
                nums.erase(nums.begin()+i);
            }
            i--;
        }
        return nums.size();
    }
};