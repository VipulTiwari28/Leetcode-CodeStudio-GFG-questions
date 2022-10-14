#include<vector>
using namespace std;
//1st solution
class Solution {
public:
    void reverseString(vector<char>& s) {
        for(int i = 0 ; i < s.size()/2;i++)
        {
            swap(s[i],s[s.size()-(i+1)]);
        }
        
    }
};
//2nd solution
class Solution {
public:
    void reverseString(vector<char>& s) {
        int start = 0,end  = s.size()-1;
        while(start < end)
        {
            swap(s[start++],s[end--]);
        }
        
    }
};