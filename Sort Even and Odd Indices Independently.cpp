#include<vector>
#include<algorithm>
using namespace std;
class Solution {
public:
    vector<int> sortEvenOdd(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            if(i%2==0){
                for(int j=i+2;j<nums.size();j=j+2)
                {
                    if(nums[i]>nums[j])
                    {
                        swap(nums[i],nums[j]);
                    }
                }
            }
            else{
                for(int j=i+2;j<nums.size();j=j+2)
                {
                    if(nums[i]<nums[j])
                    {
                        swap(nums[i],nums[j]);
                    }
                }
            }
        }
        return nums;
    }
};
//Second Solution to the problem
class Solution {
public:
    vector<int> sortEvenOdd(vector<int>& nums) {
        vector<int> odd,even,finalArr;
        for(int i=0;i<nums.size();i++){
            if(i%2==0){
                even.push_back(nums[i]);
            }
            else{
                odd.push_back(nums[i]);
            }
        }
        sort(even.begin(), even.end(), greater<int>());
        sort(odd.begin(),odd.end());
        for(int i=0;i<nums.size();i++)
        {
            if(i % 2 == 0){
                finalArr.push_back(even[even.size() - 1]);
                even.pop_back();
            } else{
                finalArr.push_back(odd[odd.size() - 1]);
                odd.pop_back();
            }
        }
        return finalArr;
    }
};