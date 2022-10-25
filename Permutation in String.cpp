#include<string>
using namespace std;
class Solution {    
private:
    bool check(int a[26],int b[26]){
        for(int i = 0 ; i<26 ; i++)
        {
            if(a[i]!=b[i]){return false;}
        }return true;
    }
public:
    bool checkInclusion(string s1, string s2) {
        if(s1.length()>s2.length()){return false;}
        int window = s1.length(),count1[26] = {0};
        for(int i = 0 ; i < s1.length() ; i++){ int t = s1[i]-'a';count1[t]++; }
        for(int i = 0 ; i <= s2.length()-window ; i++)
        {
            int count2[26] = {0};
            for(int j = i ; j < i+window ; j++)
            {
                int t = s2[j]-'a';
                count2[t]++;
                
            }
            if(check(count1,count2)){return true;}
        }return false;
    }
};