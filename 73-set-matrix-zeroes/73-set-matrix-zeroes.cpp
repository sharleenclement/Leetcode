class Solution {
public:
    void setZeroes(vector<vector<int>>& arr) {
        int i, j, n = arr.size(), m = arr[0].size();
        bool col = true;
        for(i=0;i<n;++i)
        {
            if(arr[i][0]==0)
            col = false;
            for(j=1;j<m;++j)
            {
                if(arr[i][j]==0)
                {
                    arr[i][0] = 0;
                    arr[0][j] = 0;
                }
            }
        }

        for(i=n-1;i>=0;--i)
        {
            for(j=m-1;j>=1;--j)
            {
                if(arr[i][0]==0 or arr[0][j]==0)
                {
                    arr[i][j] = 0;
                }
            }
            if(col==false)
            arr[i][0] = 0;
        }

        
    }
};