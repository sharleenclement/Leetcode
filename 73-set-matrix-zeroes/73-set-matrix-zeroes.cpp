class Solution {
public:
    void setZeroes(vector<vector<int>>& arr) {
        int i, j, n = arr.size(), m = arr[0].size();
    
        for(i=0;i<n;++i)
        {
            for(j=0;j<m;++j)
            {
                if(arr[i][j]==0)
                {
                    int f1 = i-1;
                    while(f1>=0)
                    {
                        if(arr[f1][j]!=0)
                        arr[f1][j] = INT_MIN+1;
                        f1--;
                    }

                    f1 = i+1;
                    while(f1<n)
                    {
                        if(arr[f1][j]!=0)
                        arr[f1][j] = INT_MIN+1;
                        f1++;
                    }

                    int f2 = j-1;
                    while(f2>=0)
                    {
                        if(arr[i][f2]!=0)
                        arr[i][f2] = INT_MIN+1;
                        f2--;
                    }

                    f2 = j+1;
                    while(f2<m)
                    {
                        if(arr[i][f2]!=0)
                        arr[i][f2] = INT_MIN+1;
                        f2++;
                    }
                }
            }
        }

        for(i=0;i<n;++i)
        {
            for(j=0;j<m;++j)
            if(arr[i][j]==INT_MIN+1)
            arr[i][j] = 0;
        }
    }
};