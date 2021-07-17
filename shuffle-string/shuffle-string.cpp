class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        /*
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
        TC: O(N^2), SC: O(N)
        */
        
        /*
        int i, n;
        n = indices.size();
        string str;
        str.resize(n); // str = s;
        for(i=0;i<n;++i)
        {
            str[indices[i]] = s[i];
        }
        return str;
        TC: O(N), SC: O(N)
        */
        
        int i = 0, n;
        n = indices.size();
        while(i!=n) // using while loop because we are not incrementing the loop all the time.
        {
            if(indices[i]==i)
            {
                i++; // only incrementing when the value is equal
            }
            else
            {
                swap(s[i], s[indices[i]]);
                swap(indices[i], indices[indices[i]]);
            }
        }
        return s;
    }
};