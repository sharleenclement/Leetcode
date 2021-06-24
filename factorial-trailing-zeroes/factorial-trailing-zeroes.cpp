class Solution {
public:
    int trailingZeroes(int n) {
        int c=0;
        while((n/5)>0 && n!=0)
        {
            n = n/5;
            c+=n;
        }
        return c;
    }
};