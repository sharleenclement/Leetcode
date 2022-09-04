class Solution {
public:    
    int combi(int n, int k)
    {
        if(k>n-k)
            k = n-k;
        long int a=1, i;
        for(i=0;i<k;++i)
        {
            a *= n-i;
            a /= i+1;
        }
        
        return a;
    }
    int uniquePaths(int m, int n) {
        int i;
        int maxi = m+n-2, path;
        return combi(maxi, m-1);
    }
};