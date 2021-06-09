class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        vector<int> v;
        int i, j;
        for(i=0;i<arr2.size();++i)
        {
            for(j=0;j<arr1.size();++j)
            {
                if(arr2[i]==arr1[j])
                {
                    v.push_back(arr1[j]);
                    arr1[j] = -1;
                }
            }
        }
        sort(arr1.begin(), arr1.end());
        for(i=0;i<arr1.size();++i)
        {
            if(arr1[i]!=-1)
                v.push_back(arr1[i]);
        }
        return v;
    }
};