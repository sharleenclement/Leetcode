class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int i, j, k, sum=0;
        for(i=0;i<arr.size();++i)
        {
            for(j=i;j<arr.size();j+=2)
            {
                for(k=i;k<=j;++k)
                    sum+=arr[k];
            }
        }
        return sum;
    }
};