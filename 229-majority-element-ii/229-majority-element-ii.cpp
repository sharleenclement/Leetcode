class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size(), i, c1=0, c2=0, elem1, elem2;
        vector<int> v;
        for(i=0;i<n;++i)
        {
            if(elem1==nums[i])
                c1++;
            else if(elem2==nums[i])
                c2++;
            else if(c1==0)
            {
                c1 = 1;
                elem1 = nums[i];
            }
            else if(c2==0)
            {
                c2 = 1;
                elem2 = nums[i];
            }
            else
            {
                c1--;
                c2--;
            }
        }
        c1=0;
        c2=0;
        for(i=0;i<n;++i)
        {
            if(nums[i]==elem1)
                c1++;
            else if(nums[i]==elem2)
                c2++;
        }
        if(c1>n/3)
        v.push_back(elem1);
        if(c2>n/3)
        v.push_back(elem2);
        
        return v;
    }
};