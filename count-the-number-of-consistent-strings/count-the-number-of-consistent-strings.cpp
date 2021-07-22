class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
//         int i, n;
//         int arr[26]={0};
//         for(i=0;i<allowed.length();++i)
//         {
//             arr[allowed[i]-'a']++;
//         }
//         for(i=0;i<words.size();++i)
//         {
            
//         }
        int i, j, k, c=0;
        int n = allowed.length();
        sort(allowed.begin(), allowed.end());
        int m = words.size();
        for(i=0;i<words.size();++i)
        {
            for(j=0;j<words[i].size();++j)
            {
                sort(words[i].begin(), words[i].end());
                for(k=0;k<n;++k)
                {
                    if(words[i][j]==allowed[k])
                    {
                        c=-1;
                        break;
                    }
                    else
                        c=0;
                }
                if(c==0)
                {
                    m--;
                    break;
                }
                // cout << i << " " << m << endl;
            }
        }
        return m;
    }
};