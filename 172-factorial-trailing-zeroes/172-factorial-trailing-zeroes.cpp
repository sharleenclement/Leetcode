class Solution {
public:
    int trailingZeroes(int n) {
        int i=1, ans=0, div=1;
        
        while(n!=0)
        {
            int div = n/pow(5, i);
            ans += div;
            if(div==0)
                break;
            i++;
        }
        
        return ans;
    }
};