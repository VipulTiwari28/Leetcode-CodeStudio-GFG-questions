#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size()-1;
        for(int i = n ; i >= 0 ; i--){
            if(nums[i] == 0){
                nums.erase(nums.begin()+i);
                nums.push_back(0);
            }
        }
    }
};