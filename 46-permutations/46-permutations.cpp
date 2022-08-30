class Solution {
public:
    vector<vector<int>> vec;
    vector<vector<int>> heap_p(vector<int>& nums, int s, int e) {
        if(s==1)
        {
            vec.push_back(nums);
            return vec;
        } 
        
        for(int i=0;i<s;++i)
        {
            vec = heap_p(nums, s-1, e);
            if(s%2==0)
                swap(nums[0], nums[s-1]);
            else
                swap(nums[i], nums[s-1]);
        }
        
        return vec;
    }
    
    vector<vector<int>> permute(vector<int>& nums) {
        int n = nums.size();
        return heap_p(nums, n, n);
    }
};