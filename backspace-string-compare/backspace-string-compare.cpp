class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char>st;
        stack<char>st1;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='#' && !st.empty())
                st.pop();
            else
                st.push(s[i]);
        }
        string first="";
        string second="";
        while(!st.empty())
        {
            if(st.top()=='#')
                st.pop();
            else
            {
                first+=st.top();
                st.pop();
            }
        }
        for(int i=0;i<t.size();i++)
        {
           if(t[i]=='#' && !st1.empty())
                st1.pop();
            else
                st1.push(t[i]);
        }
         while(!st1.empty())
        {
             if(st1.top()=='#')
                st1.pop();
             else
             {
                 second+=st1.top();
                 st1.pop();
             }
        }
        reverse(first.begin(),first.end());
        reverse(second.begin(),second.end());
        cout << first << " " << second;
        if(first==second)
            return true;
        return false;
        
    }
};