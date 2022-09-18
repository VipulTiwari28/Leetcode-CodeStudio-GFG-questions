#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        vector<int> ans;
        int carry = 1;
        
        for(int i=digits.size()-1; i>=0; i--){
            int number = digits[i] + carry;
            int to_insert = number%10;
            carry = number/10;
            
            ans.push_back(to_insert);
        }
        
        if(carry)ans.push_back(carry);
        reverse(ans.begin() , ans.end());
        return ans;
    }
};