class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int i, j, k, n = nums.size(), s, e, mid;
        long ans = 0;
        set<vector<int>> svec;
        vector<pair<int, int>> p;
        for(i=0;i<n;++i)
            p.push_back(make_pair(nums[i], i));
        sort(p.begin(), p.end());
        for(i=0;i<n;++i)
        {
            for(j=i+1;j<n;++j)
            {
                for(k=j+1;k<n;++k)
                {
                    vector<int> v;
                    ans = (long)p[i].first + (long)p[j].first + (long)p[k].first;
                    s = k+1;
                    e = n-1;
                    while(s<=e)
                    {
                        mid = s + (e-s)/2;
                        if(p[mid].first+ans==target)
                        {
                            v.push_back(p[mid].first);
                            v.push_back(p[i].first);
                            v.push_back(p[j].first);
                            v.push_back(p[k].first);
                            sort(v.begin(),v.end());
                            svec.insert(v);
                            break;
                        }
                        else if(p[mid].first+ans<target)
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