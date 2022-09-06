class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int LongestStreak = 1, ans = 0;
set<int> st;
for (auto i : nums)
{
st.insert(i);
}
int temp = INT_MIN;
for (auto it = st.begin(); it != st.end(); it++)
{
if (temp + 1 == (*it))
{
LongestStreak++;
temp = (*it);
ans = max(ans, LongestStreak);
}
else
{
LongestStreak = 1;
temp = (*it);
ans = max(ans, LongestStreak);
}
}
return ans;
    }
};
