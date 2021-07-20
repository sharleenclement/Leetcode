class Solution {
public:
    string reverseWords(string s) {
        reverse(s.begin(), s.end());
        int k = s.length(), i;
        string ns = s;
        int n = 0, c=0;
        for(i=0;i<k;i++)
        {
            if(s[i]==' ') 
            {
                reverse(s.begin()+n, s.begin()+i);
                n = i+1;
            }
        }
        reverse(s.begin()+n, s.end());
        stringstream str(s);
        string word;
        vector<string> vec;
        while (str >> word)
        {
            vec.push_back(word);
            c++;
        }
        
        string res;
        int m = 1;
        for (auto it : vec) 
        {
            // cout << c << " " << m << endl;
            if(c==m)
                res+=it;
            else
            res+=it+" "; 
            m++;
        }
        return res;
    }
};