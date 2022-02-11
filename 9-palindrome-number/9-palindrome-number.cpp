class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)
            return false;
        else if(x==0)
            return true;
        int d;
        string ans="";
        string k = to_string(x);
        while(x!=0)
        {
            d = x%10;
            ans += "" + to_string(d);
            x = x/10;
        }
        if(ans==k)
        return true;
        
        return false;
    }
};