class Solution {
public:
    int signFunc(long long int k)
    {
        if(k>0)
            return 1;
        else if(k==0)
            return 0;
        return -1;
    }
    int arraySign(vector<int>& nums) {
        int prod = 1;
        int n, i;
        n = nums.size();
        for(i=0;i<n;++i)
        {
            if(nums[i]>0)
                nums[i] = 1;
            else if(nums[i]<0)
                nums[i] = -1;
            prod *= nums[i];
            if(prod==0)
                break;
        }
        
        return signFunc(prod);
    }
};