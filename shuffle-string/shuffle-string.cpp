class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        int i, j, n, k=0;
        n = indices.size();
        string str;
        for(i = 0; i < n; ++i)
        {
            
            for(j = 0; j < n; ++j)
            {
                if(indices[j]!=-1 && indices[j]==k)
                {
                    str += s[j];
                    indices[j] = -1;
                    k++;
                }
            }
        }
        return str;
    }
};