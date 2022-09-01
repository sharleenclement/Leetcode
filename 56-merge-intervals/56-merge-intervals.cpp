class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> vec;
        int n = intervals.size(), i, j, curr1, curr2;
        sort(intervals.begin(), intervals.end());
        
        for(i=0;i<n;++i)
        {
            curr1 = intervals[i][0];
            curr2 = intervals[i][1];
            
            if(!vec.empty())
            {
                if(curr1<=vec.back()[1])
                {
                    continue;
                }
            }
            
            for(j=i+1;j<n;++j)
            {
                if(intervals[j][0]<=curr2)
                    curr2 = max(curr2, intervals[j][1]);
            }
            
            curr2 = max(curr2, intervals[i][1]);
            
            vec.push_back({curr1, curr2});
        }
        return vec;
    }
};