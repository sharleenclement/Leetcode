class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i, first, k, j=0;
        if(n>0)
        {
            for(i=0;i<m;++i)
            {
                if(nums1[i]>nums2[0])
                {
                    swap(nums1[i], nums2[0]);
                }

                first = nums2[0];

                for(k=1; k<n && nums2[k] < first; k++)
                    nums2[k-1] = nums2[k];

                nums2[k-1] = first;
            }
            while(j<n)
                nums1[i++] = nums2[j++];
        }
    }
};