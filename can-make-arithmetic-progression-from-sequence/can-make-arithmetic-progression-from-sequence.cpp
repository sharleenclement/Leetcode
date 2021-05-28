class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        int i, sum1=arr[1]-arr[0], sum2=0;
        for(i=1;i<arr.size()-1;++i)
        {
            sum2 = arr[i+1]-arr[i];
            if(sum1!=sum2)
                return false;
        }
        return true;
    }
};