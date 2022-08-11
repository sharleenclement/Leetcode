class Solution {
public:
    int minTimeToVisitAllPoints(vector<vector<int>>& points) {
        int ans=0, i=0, j=0, n=points.size(), left, right, left1, right1, ans1, ans2;
        left = points[i][0];
        right = points[i][1];
        for(i=1;i<n;++i)
        {
            left1 = points[i][0];
            right1 = points[i][1];
            ans1 = abs(left-left1);
            ans2 = abs(right-right1);
            ans += max(ans1, ans2);
            left = left1;
            right = right1;
        }
        return ans;
    }
};