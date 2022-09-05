class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int i, j, n = nums.size(), c=0;
        vector<int> v;
        vector<pair<int, int>> p;
        for(i=0;i<n;++i)
            p.push_back(make_pair(nums[i], i));
        sort(p.begin(), p.end());
        i=0, j=n-1;
        while(i<=j)
        {
            if(p[i].first+p[j].first==target)
            {
                v.push_back(p[i].second);
                v.push_back(p[j].second);
                break;
            }
            else if(p[i].first+p[j].first>target)
                j--;
            else
                i++;
        }
        return v;
    }
};