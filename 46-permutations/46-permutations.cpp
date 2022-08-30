class Solution {
public:
    void heap_p(vector<int>& nums, int s, int e, vector<vector<int>>& vec) {
        if(s==1)
        {
            vec.push_back(nums);
            return;
        } 
        
        for(int i=0;i<s;++i)
        {
            heap_p(nums, s-1, e, vec);
            if(s%2==0)
                swap(nums[0], nums[s-1]);
            else
                swap(nums[i], nums[s-1]);
        }
    }
    
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> vec;
        int n = nums.size();
        heap_p(nums, n, n, vec);
        return vec;
    }
};