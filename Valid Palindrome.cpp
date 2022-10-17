#include<string>
using namespace std;
class Solution {
private:
    string validString(string s){
        string newStr = "";
        for(int i = 0; i<s.length();i++)
        {
            if((s[i]>='a' && s[i]<='z')||(s[i]>='A' && s[i]<='Z')||(s[i]>='0' && s[i]<='9'))
            {
                newStr.push_back(s[i]);
            }
        }
        return newStr;
    }
public:
    bool isPalindrome(string s) {
        s = validString(s);
        for(int i = 0;i<s.length();i++){
            if(s[i]>='A' && s[i]<='Z'){
                s[i] = s[i]-'A'+'a';
            }
        }
        int start = 0,end = s.length()-1;
        while(start<=end)
        {
            if(s[start++]!=s[end--])
            {
                return 0;
            }
        }return 1;
    }
};