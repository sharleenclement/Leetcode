class Solution {
public:
    vector<int> v;
    vector<vector<int>> x;
    void permute(vector<int>& nums, int i)
    {
        if(nums.size()==i)
        {
            x.push_back(nums);
            return;
        }
        
        for(int j=i;j<nums.size();++j)
        {
            swap(nums[i], nums[j]);
            permute(nums, i+1);
            swap(nums[i], nums[j]);
        }
    }
    
    vector<vector<int>> permute(vector<int>& nums) 
    {
        permute(nums, 0);
        return x;
    }
};