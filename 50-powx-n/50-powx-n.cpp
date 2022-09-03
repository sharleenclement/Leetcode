class Solution {
public:
    double myPow(double x, int n) {
        double ans = 1.0, neg = 1.0;

        if(n==0 and (ceil(x) == floor(x)) or x==1.0) // handle the decimal points
            return x;
        else if(n==0 and (ceil(x) != floor(x)))
            return ans;
        
        long k = abs(n);
        
        while(k>0)
        {
            if(k%2==1)
            {
                ans = ans * x;
                k--;
            }
            else
            {
                x = x*x;
                k /= 2;
            }
        }
        
        if(n>0)
            return ans;
        
        return 1.0/ans;
    }
};