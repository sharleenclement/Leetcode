class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        vector<string> v = {"type", "color", "name"};
        int t, i, c=0;
        for(i = 0;i<v.size();++i)
        {
            if(v[i]==ruleKey)
            {
                t = i;
                break;
            } 
        }
        for(i=0;i<items.size();++i)
        {
            if(items[i][t]==ruleValue)
            {
                // cout << items[i][t] << endl;
                c++;
            }
        }
        return c;
    }
};