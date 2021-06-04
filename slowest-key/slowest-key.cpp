class Solution {
public:
    char slowestKey(vector<int>& releaseTimes, string keysPressed) {
        int n = releaseTimes.size();
        int i, sum[n];
        sum[0] = releaseTimes[0];
        char s;
        for(i=1;i<n;++i)
        {
            sum[i] = releaseTimes[i] - releaseTimes[i-1];
        }
        multimap<int, char, greater<int>> mp;
        for(i=0;i<keysPressed.length();++i)
        {
            mp.insert(pair<int, char>(sum[i], keysPressed[i]));
        }
        int maxi = *max_element(sum, sum+n);
        for(auto& it: mp)
        {
            if((it.first)==maxi && (it.second)>s)
                s = it.second;
            // cout << it.first << " " << it.second << endl;
        }
        return s;
    }
};