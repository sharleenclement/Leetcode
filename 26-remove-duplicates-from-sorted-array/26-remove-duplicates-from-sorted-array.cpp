class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i, j=0, n = nums.size();
        set<int> s;
        
        for(i=0;i<n;++i)
            s.insert(nums[i]);
        
        for(auto x: s)
            nums[j++] = x;
        
        return s.size();
    }
};