class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        vector<int> even;
        vector<int> odd;
        vector<int> evenodd;
        int i;
        for(i=0;i<nums.size();++i)
        {
            if(nums[i]%2==0)
                even.push_back(nums[i]);
            else
                odd.push_back(nums[i]);
        }
        evenodd.insert(evenodd.begin(), even.begin(), even.end());
	    evenodd.insert(evenodd.end(), odd.begin(), odd.end());
        return evenodd;
    }
};