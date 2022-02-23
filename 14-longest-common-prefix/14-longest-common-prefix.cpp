class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.size()==0)
            return "";
        string prefix = strs[0];
        
        for(int i=1;i<strs.size();++i)
        {
            string k = strs[i];
            
            if(k=="" || prefix=="")
                return "";
            
            prefix = prefix.substr(0, min(k.size(), prefix.size()));
            
            for(int j=0;j<k.size() && j<prefix.size();++j)
            {
                if(k[j]!=prefix[j])
                {
                    prefix = prefix.substr(0, j);
                    break;
                }
            }
        }
        
        return prefix;
    }
};