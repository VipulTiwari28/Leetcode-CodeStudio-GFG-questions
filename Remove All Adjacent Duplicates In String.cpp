#include<string>
using namespace std;
class Solution {
public:
    string removeDuplicates(string s) {
        /*int i = 0;
        while(i<s.length())
        {
            if(s[i]!=s[i+1]){ str.push_back(s[i]); i = 0; }
            else{i++;}
        }return s;*/
        int i = 0;
        string d = "";
        while(i<s.length())
        {
            if(d.empty()){d.push_back(s[i]);}
            else if(s[i] != d.back()){d.push_back(s[i]);}
            else {d.pop_back();}
            i++;
        }return d;   


    }
};