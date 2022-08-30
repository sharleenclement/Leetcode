class Solution {
public:
    vector<vector<int>> vec;
    vector<vector<int>> p(vector<int>& nums, int s, int e) {
        if(s==e)
        {
            vec.push_back(nums);
            return vec;
        } 
        
        for(int i=s;i<=e;++i)
        {
            swap(nums[s], nums[i]);
            vec = p(nums, s+1, e);
            swap(nums[s], nums[i]);
        }
        
        return vec;
    }
    
    vector<vector<int>> permute(vector<int>& nums) {
        int n = nums.size();
        return p(nums, 0, n-1);
    }
};