class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> v;
        int c=0, i;
        for(i=0;i<heights.size();++i)
            v.push_back(heights[i]);
        sort(v.begin(), v.end());
        for(i=0;i<heights.size();++i)
        {
            if(v[i]!=heights[i])
                c++;
        }
        return c;
    }
};