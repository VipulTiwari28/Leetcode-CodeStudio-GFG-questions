#include<string>
using namespace std;
class Solution {
public:
    int strStr(string haystack, string needle) {
        int f = haystack.find(needle);
        if(f>=0){return f;}
        return -1;
    }
};