class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        int n = words.size();
        int m = n;
        int i, j;
        if(n==1)
            return 1;
        else
        {
            vector<string> s;
            string x;
            x.resize(500);
            string k[26] = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
            for(i=0;i<n;++i)
            {
                x = "";
                for(j=0;j<words[i].size();++j)
                {
                    x += k[words[i][j]-'a'];
                }
                s.push_back(x);
            }
            for(i=0;i<n;++i)
            {
                for(j=i+1;j<n;++j)
                {
                    if(s[i]==s[j])
                    {
                        m--;
                        break;
                    }
                }
            }
        }
        return m;
    }
};