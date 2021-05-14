class Solution {
public:
    int xorOperation(int n, int start) {
        int tot = 0, ans = 0, i;
        for(i=0;i<n;++i)
        {
            tot = start + 2*i;
            ans = ans^tot;
        }
        return ans;
    }
};