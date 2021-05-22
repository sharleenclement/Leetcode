class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int n = arr.size();
        int i, j, max = INT_MIN;
        if(n==1)
        {
            arr[0] = -1;
        }
        else
        {
            for(i=0;i<n;++i)
            {
                max = 0;
                for(j=i+1;j<n;++j)
                {
                    if(arr[j]>max)
                    {
                        max = arr[j];
                    }
                }
                arr[i] = max;
            }
            arr[n-1] = -1;
        }
        return arr;
    }
};