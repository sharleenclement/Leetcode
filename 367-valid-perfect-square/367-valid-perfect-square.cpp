class Solution {
public:
    bool isPerfectSquare(int num) {
        long long i;
        if(num==1)
            return true;
        
        for(i=1;i*i<=num;++i)
        {
            if(i*i==num)
                return true;
        }
        
        return false;
    }
};
