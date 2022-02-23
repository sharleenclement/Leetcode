class Solution {
public:
 string commonPrefixUtil(string str1, string str2)
{
    string result;
    int n1 = str1.length(), n2 = str2.length();
 
    for (int i=0, j=0; i<=n1-1&&j<=n2-1; i++,j++)
    {
        if (str1[i] != str2[j])
            break;
        result.push_back(str1[i]);
    }
    return (result);
}
string longestCommonPrefix1(vector<string> S, int low, int high)
{
    if (low == high)
        return (S[low]);
 
    if (high > low)
    {
        int mid = low + (high - low) / 2;
 
        string str1 = longestCommonPrefix1(S, low, mid);
        string str2 = longestCommonPrefix1(S, mid+1, high);
 
        return (commonPrefixUtil(str1, str2));
    }
    return "";
}
    string longestCommonPrefix(vector<string> v)
    {
        int low = 0, high = v.size()-1;
        return longestCommonPrefix1(v, low, high);
    }

};