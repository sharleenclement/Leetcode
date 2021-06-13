class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> v;
        int mini = *min_element(nums.begin(), nums.end());
        int maxi = *max_element(nums.begin(), nums.end());
        int arr[maxi+1], i;
        for(i=mini;i<maxi+1;++i)
            arr[i] = 0;
        for(i=0;i<nums.size();++i)
            arr[nums[i]]++;
        for(i=mini;i<maxi+1;++i)
        {
            if(arr[i]==2)
                v.push_back(i);
        }
        return v;
    }
};