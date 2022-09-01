class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i;
        vector<int> nums3;
        
        for(i=0;i<m;++i)
            nums3.push_back(nums1[i]);
        
        for(i=0;i<n;++i)
            nums3.push_back(nums2[i]);
        
        sort(nums3.begin(), nums3.end());
        
        for(i=0;i<m+n;++i)
            nums1[i] = nums3[i];
    }
};