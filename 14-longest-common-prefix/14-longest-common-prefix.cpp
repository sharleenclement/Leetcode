class Solution {
public: 
    
    string commonPrefix(string s1, string s2)
    {
        string ans = "";
        for(int i=0;i<s1.size() && i<s2.size();++i)
        {
            if(s1[i]==s2[i])
            ans += s1[i];
            else
            break;
        }
        return ans;
    }
    
    string divideAndConquer(vector<string> v, int low, int high)
    {
        if(low==high)
        return v[low];
        
        while(low<high)
        {
            int mid = low + (high - low)/2;
            
            string s1 = divideAndConquer(v, low, mid);
            string s2 = divideAndConquer(v, mid+1, high);
            
            return commonPrefix(s1, s2);
        }
        return "";
    }

    string longestCommonPrefix(vector<string> v)
    {
        int low = 0, high = v.size()-1; 
        return divideAndConquer(v, low, high);
    }
};