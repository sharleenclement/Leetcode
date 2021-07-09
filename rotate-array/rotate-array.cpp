class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int i;
        int n = nums.size();
        int brr[n];
        int x = k;
        if(k>=n)
        {
            k = k%n; // 1
            x = k;
        }
        for(i=n-1;i>=n-k;--i) // 2 >= 2
        {          
            brr[x-1] = nums[i];
            x--;
        }
        for(i=0;i<n-k;++i)
        {
            brr[i+k] = nums[i];
        }
        for(i=0;i<n;++i)
        nums[i] = brr[i];
    }
};