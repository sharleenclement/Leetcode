class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> vec;
        int n = intervals.size(), i, curr1, curr2;
        sort(intervals.begin(), intervals.end());

        for(i=0;i<n;++i)
        {
            curr1 = intervals[i][0];
            curr2 = intervals[i][1];
            
            if(vec.empty() or (vec.back()[1]<curr1))
            {
                vec.push_back({curr1, curr2});
            }
            else
            {
                vec.back()[1] = max(vec.back()[1], curr2);
            }
        }
        return vec;
    }
};