class Solution {
public:
    bool isAnagram(string s, string t) {        
        int i, n=s.length(), m=t.length();
        
        if(n!=m)
            return false;
        
        priority_queue<char> q1;
        priority_queue<char> q2;
        
        for(i=0;i<n;++i)
        {
            q1.push(s[i]);
        }
        
        for(i=0;i<m;++i)
        {
            q2.push(t[i]);
        }
        
        while(!q1.empty())
        {
            if(q1.top()!=q2.top())
                return false;
            q1.pop();
            q2.pop();
        }
        
        return true;
    }
};