#include<cmath>
class Solution {
public:
    int bitwiseComplement(int n) {
        int i=0,count=0;
        if(n>0){
        while(n>0){
            int t = n%2;
            n = n/2;
            if(t==1){count = count+0*pow(2,i);}
            else{count = count+1*pow(2,i);}
            i++;}return count;}
        return 1;
    }
};