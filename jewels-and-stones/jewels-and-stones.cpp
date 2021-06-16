class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int i, j, c=0;
        for(i=0;i<jewels.length();++i)
        {
            for(j=0;j<stones.length();++j)
            {
                if(jewels[i]==stones[j])
                    c++;
            }
        }
        return c;
    }
};