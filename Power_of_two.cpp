#include<iostream>
#include<cmath>
using namespace std;
class Solution {
public:
    bool isPowerOfTwo(int n) {
        double vals = log2(n);
        if(fmod(vals,2.0)==0 || fmod(vals,2.0)==1){return true;}
        else{return false;}
    }
};