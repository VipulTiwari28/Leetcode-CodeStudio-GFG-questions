class Solution {
public:
    int subtractProductAndSum(int n) {
        int sum = 0 ,product = 1;
        while(n>0)
        {
            int left = n%10;
            n = n - left;
            n = n/10;
            sum = sum + left;
            product = product * left;
        }
        return (product - sum);
    }
};