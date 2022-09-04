class Solution {
public:
    int majorityElement(vector<int>& nums) {
        // count will always c>=1 as even if everything gets cancelled that one element will remain
        int i, n = nums.size(), c=0, elem=nums[0];
        for(i=0;i<n;++i)
        {
            if(c<=0)
                elem = nums[i];
            if(elem==nums[i])
                c++;
            else
                c--;
        }
        
        return elem;
            
    }
};