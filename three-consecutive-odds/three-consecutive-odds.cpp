class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
        int i, n = arr.size();
        for(i=0;i<n;++i)
        {
            if((n-i)<3)
                return false;
            if((arr[i]%2==1) && (arr[i+1]%2==1) && (arr[i+2]%2==1))
                return true;
        }
        return false;
    }
};