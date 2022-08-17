class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n = nums.size();
        int l = 1, h = n-1, mid, i, c;
        while(l<=h)
        {
            mid = l + (h-l)/2;
            c=0;
            for(i=0;i<n;++i)
                if(nums[i]<=mid)
                    c++;
            if(c<=mid)
                l = mid + 1;
            else
                h = mid - 1;
        }
        return l;
    }
};