class Solution {
public:
    void p(vector<int>& nums, vector<int>& ans, vector<vector<int>>& fin, int *freq) {
        if(ans.size()==nums.size())
        {
            fin.push_back(ans);
            return;
        } 
        
        for(int i=0;i<nums.size();++i)
        {
            if(freq[i]!=1)
            {
                ans.push_back(nums[i]);
                freq[i] = 1;
                p(nums, ans, fin, freq);
                ans.pop_back();
                freq[i] = 0;
            }
        }

    }
    
    vector<vector<int>> permute(vector<int>& nums) {
        vector<int> ans;
        vector<vector<int>> fin;
        int freq[nums.size()];
        for(int i=0;i<nums.size();++i)
            freq[i] = 0;
        p(nums, ans, fin, freq);
        return fin;
    }
};