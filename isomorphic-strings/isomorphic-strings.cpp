class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char, char> mp_s, mp_t;
        int len_s = s.length();
        int len_t = t.length();
        int i;
        if(len_s!=len_t)
            return false;
        for (int i = 0; i < s.size(); ++ i)
        {
            if ((mp_s.count(s[i]) > 0) && (mp_s[s[i]] != t[i])) 
                return false;
            if ((mp_t.count(t[i]) > 0) && (mp_t[t[i]] != s[i])) 
                return false;
            mp_s[s[i]] = t[i];
            mp_t[t[i]] = s[i];
        }
        return true;

    }
};