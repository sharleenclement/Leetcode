class Solution {
public:
    int subtractProductAndSum(int n) {
        int d, sum = 0, prod = 1, ans;
        while(n!=0)
        {
            d = n%10;
            sum += d;
            prod *= d;
            n = n/10;
        }
        ans = prod - sum;
        return ans;
    }
};