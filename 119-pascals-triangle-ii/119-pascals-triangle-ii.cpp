class Solution {
public:
    long binomial_coeff(int n, int k)
    {
        if(k>n)
            k = n - k;
        
        long i, a = 1;
        for(i=0;i<k;++i)
        {
            a *= n-i;
            a /= i+1;
        }
        
        return a;
    }
    
    vector<int> getRow(int rowIndex) {
        int i, n = rowIndex+1;
        vector<int> v;
        for(i=1;i<=n;++i)
        {
            if(i==1 or i==n)
                v.push_back(1);
            else
            {
                v.push_back(binomial_coeff(n-1, i-1));
            }
        }
        return v;
    }
};