class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
        int i, j, k, l, c=0, d=0, m=0;
        for(i=0;i<mat.size();++i)
        {
            for(j=0;j<mat[i].size();++j)
            {
                if(mat[i][j]==1)
                {
                    c=0;
                    for(k=0;k<mat[i].size();++k)
                    {
                        if((mat[i][k]==0) && k!=j)
                        {
                            c++;
                        }
                    }
                    if(c==(mat[i].size()-1))
                    {
                        d=0;
                        for(l=0;l<mat.size();++l)
                        {
                            if((mat[l][j]==0) && l!=i)
                            {
                                d++;
                            }
                        }
                        if(d==(mat.size()-1))
                            m++;
                    }
                    break;
                }
            }
        }
        return m;
    }
};