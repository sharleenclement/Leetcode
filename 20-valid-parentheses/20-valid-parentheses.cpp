class Solution {
public:
    bool isValid(string s) {
        stack<char> s1;
        int n = s.length(), i;
        for(i=0;i<n;++i)
        {
            if(s[i]=='(' or s[i]=='{' or s[i]=='[')
            s1.push(s[i]);
            else
            {
                if(!s1.empty())
                {
                    if(s[i]==')' and s1.top()=='(')
                        s1.pop();
                    else if(s[i]==']' and s1.top()=='[')
                        s1.pop();
                    else if(s[i]=='}' and s1.top()=='{')
                        s1.pop();
                    else 
                        return false;
                }
                else
                    return false;
            }
        }
        return s1.empty();
    }
};