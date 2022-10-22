#include <vector>
#include <algorithm>
using namespace std;
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        for(int i = 0 ; i<nums.size()-1;i=i+2)
        {
            int count = 1;
            if(nums[i]==nums[i+1]){ count++; }
            if(count == 1){return nums[i];}
        }return nums[nums.size()-1];
    }
};