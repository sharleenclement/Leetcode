class Solution {
public:
    bool isPerfectSquare(int num) {
        
        if(num==1)
            return true;
        
        long long l=0, h=num/2, mid;
        
        while(l<=h)
        {
            mid = l + (h-l)/2;
            if(mid*mid==num)
                return true;
            else if(mid*mid<num)
                l = mid + 1;
            else
                h = mid - 1;
        }
        
        return false;
    }
};
