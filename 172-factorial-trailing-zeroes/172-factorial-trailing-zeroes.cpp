class Solution {
public:
    int trailingZeroes(int n) {
        int i=1, ans=0, div=1;
        
        while(n!=0)
        {
            ans += n/5;
            n /= 5;
        }
        
        return ans;
    }
};