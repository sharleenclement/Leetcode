class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int> sum;
        int k = n, i;
        for(i=0;i<n;++i)
        {
            if(i==(n-1) && n%2==1)
            {
                sum.push_back(0);
            }
            else if(i%2==0)
            {
                sum.push_back(-k);
            }
            else
            {
                sum.push_back(k);
                k--;
            }
        }
        return sum;
    }
};