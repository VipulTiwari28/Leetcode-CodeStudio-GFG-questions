#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int i = nums.size()-1;
        while(i>=0)
        {
            if(nums[i]==val)
            {
                nums.erase(nums.begin()+i);
            }
            i--;
        }
        return nums.size();
        
    }
};