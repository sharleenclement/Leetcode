class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i=0, j=0, n1=nums1.size(), m1=nums2.size(), k=0;
        vector<int> nums3;
        
        while(i<m && j<n)
        {
            if(nums1[i]<nums2[j])
            {
                nums3.push_back(nums1[i++]);
            }
            else
            {
                nums3.push_back(nums2[j++]);
            }
        }
        
        while(i<m)
        {
            nums3.push_back(nums1[i++]);
        }
        while(j<n)
        {
            nums3.push_back(nums2[j++]);
        }
        
        for(i=0;i<nums3.size();++i)
            nums1[i] = nums3[i];
    }
};