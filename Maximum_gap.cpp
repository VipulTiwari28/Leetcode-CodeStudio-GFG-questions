#include<vector>
class Solution {
public:
    int maximumGap(vector<int>& nums) {
        if(nums.size()>1)
        {
            sort(nums.begin(),nums.end());
            int gap = INT_MIN;
            for(int i = 0;i<nums.size()-1;i++)
            {
                if(nums[i+1]-nums[i]>gap)
                {
                    gap = nums[i+1]-nums[i];
                }
            }
            return gap;
        }
        return 0;
        
    }
};