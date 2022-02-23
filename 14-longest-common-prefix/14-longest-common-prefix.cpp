class Solution {
public:
 int findMinLength(vector<string> S, int n)
{
    int min = INT_MAX;
  
    for (int i=0; i<=n-1; i++)
        if (S[i].length() < min)
            min = S[i].length();
    return(min);
}
  
bool allContainsPrefix(vector<string> S, int n, string str,
                       int start, int end)
{
    for (int i=0; i<=n-1; i++)
        for (int j=start; j<=end; j++)
            if (S[i][j] != str[j])
                return (false);
    return (true);
}
string longestCommonPrefix1(vector<string> S, int n)
{
    int index = findMinLength(S, n);
    string prefix; 
    int low = 0, high = index;
  
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
  
        if (allContainsPrefix (S, n, S[0], low, mid))
        {
            prefix = prefix + S[0].substr(low, mid-low+1);
            low = mid + 1;
        }
  
        else 
            high = mid - 1;
    }
  
    return (prefix);
}


    string longestCommonPrefix(vector<string> v)
    {
        int low = 0, high = v.size();
        return longestCommonPrefix1(v, high);
    }

};