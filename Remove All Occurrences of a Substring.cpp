#include<string>
using namespace std;
class Solution {
public:
    string removeOccurrences(string s, string part) {
        int index = s.find(part);
        while(s.length()!=0 && index>=0)
        {
            s.erase(index,part.length());
            index = s.find(part);
        }
        return s;
    }
};