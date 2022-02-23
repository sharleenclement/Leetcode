class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(), strs.end());
        int i = 0, vsize = strs.size();
        string ans = "";
        while(i<strs[0].size())
        {
            if(strs[0][i]==strs[vsize-1][i])
                ans += strs[0][i];
            else
                break;
            i++;
        }
        return ans;
    }
};