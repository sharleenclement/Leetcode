class Solution {
public:
    bool isPerfectSquare(int num) {
        long long i;
        if(num==1)
            return true;
        
        for(i=1;i<=num/2;++i)
        {
            if(i*i==num)
                return true;
        }
        
        return false;
    }
};