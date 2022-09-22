#include<iostream>
#include<cmath>
using namespace std;
class Solution {
public:
    int divide(int dividend, int divisor) {
        int64_t upperVal = pow(2,31)-1;
        int64_t lowerVal = pow(2,31)*(-1);
        int64_t divi = dividend;
        int64_t divs = divisor;
        int64_t q = (divi/divs);
        if(q>upperVal)
        {
            return upperVal;
        }
        else if(q<lowerVal)
        {
            return lowerVal;
        }
        else
        {
            return q;
        }
    }
};