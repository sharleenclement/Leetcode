class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        
        
        for(int i=0;s[i]!='\0';++i)
        {
            char ch = s[i];
            if(ch=='(' || ch=='[' || ch=='{')
            {
                st.push(ch);
            }
            else
            {
                if(st.empty() || (ch==')' && st.top()!='(') || (ch==']' && st.top()!='[') || (ch=='}' && st.top()!='{'))
                   return false;
                st.pop();
            }
        }
        if(!st.empty())
            return false;
        
        return true;
    }
};