class Solution {
public:
    bool areOccurrencesEqual(string s) {
        map<char,int>m;
        int ans1;
        for(int i=0;i<s.size();i++) 
        {
            m[s[i]]++;  
        } 
        int ans2 = m.begin()->second;
        for(auto it=m.begin();it!=m.end();it++) 
        {
            ans1 = it->second;
            if(ans1!=ans2)
                return false;
        }
       return true;
        
    }
};