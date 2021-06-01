class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
        int i, j, mini=INT_MAX, k, c=0, l=0;
        vector<int> v;
        for(i=0;i<matrix.size();++i)
        {
            for(j=0;j<matrix[i].size();++j)
            {
                if(matrix[i][j]<mini)
                {
                    mini = matrix[i][j];
                    l=j;
                }
            }
            for(k=0;k<matrix.size();++k)
            {
                // cout << k << " " << i << endl;
                // cout << matrix[k][l] << " " << mini << endl;
                if(matrix[k][l]>mini)
                {
                    c=-1;
                    break;
                }
                else
                    c++;
            }
            // cout << "out";
            if(c>0)
            v.push_back(mini);
            c=0;
            mini=INT_MAX;
        }
        return v;
    }
};