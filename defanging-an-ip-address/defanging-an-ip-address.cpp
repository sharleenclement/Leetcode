class Solution {
public:
    string defangIPaddr(string address) {
        string s;
        int i, j, c = 0, n;
        n = address.length();
        for(i=0;i<n;++i)
        {
            if(address[i]=='.')
            {
                c++;
            }
        }
        // n += 2*c;
        // cout << n;
        for(j=0;j<n;)
        {
            if(address[j]=='.')
            {
                s += "[.]";
                // i+=2;
                j++;
            }
            else
            {
                s += address[j];
                // i++;
                j++;
            }
        }
        return s;
    }
};