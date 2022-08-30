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

    vector<vector<int>> generate(int numRows) {
        int i, j, n = numRows;
        vector<vector<int>> vec;
        for(i=1;i<=n;++i)
        {
            vector<int> v;
            for(j=1;j<=i;++j)
            {
                if(j==1 or j==i)
                v.push_back(1);
                else
                {
                    v.push_back(binomial_coeff(i-1, j-1));
                }
            }
            vec.push_back(v);
        }
        return vec;
    }
};