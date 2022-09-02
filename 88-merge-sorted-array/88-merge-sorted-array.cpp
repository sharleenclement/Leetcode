class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i=0, j=0, k=m-1;

        while(i<=k && j<n)
        {
            if(nums1[i]<nums2[j])
            {
                i++;
            }
            else
            {
                swap(nums1[i++], nums2[j]);
                sort(nums2.begin(), nums2.end());
            }
        }
        
        j=0;
        while(j<n)
            nums1[i++] = nums2[j++];
    }
};