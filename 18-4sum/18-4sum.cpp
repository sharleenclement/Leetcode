class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int i, j, k, n = nums.size(), s, e, mid;
        long ans = 0;
        set<vector<int>> svec;
        sort(nums.begin(), nums.end());
        for(i=0;i<n;++i)
        {
            for(j=i+1;j<n;++j)
            {
                for(k=j+1;k<n;++k)
                {
                    vector<int> v;
                    ans = (long)nums[i] + (long)nums[j] + (long)nums[k];
                    s = k+1;
                    e = n-1;
                    while(s<=e)
                    {
                        mid = s + (e-s)/2;
                        if(nums[mid]+ans==target)
                        {
                            v.push_back(nums[i]);
                            v.push_back(nums[j]);
                            v.push_back(nums[k]);
                            v.push_back(nums[mid]);
                            sort(v.begin(),v.end());
                            svec.insert(v);
                            break;
                        }
                        else if(nums[mid]+ans<target)
                            s = mid + 1;
                        else
                            e = mid - 1;
                    }
                }
            }
        }
        vector<vector<int>> vec(svec.begin(), svec.end());
        
        return vec;
    }
};