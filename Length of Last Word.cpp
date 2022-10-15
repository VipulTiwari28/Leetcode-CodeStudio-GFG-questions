#include<string>
using namespace std;
class Solution {
public:
    int lengthOfLastWord(string s) {
        int size = s.length()-1,count = 0;
        while(s[size]==' '){size--;}
        while(s[size]!=' '){size--;count++;if(size<0){return count;}}
        return count;
    }
};