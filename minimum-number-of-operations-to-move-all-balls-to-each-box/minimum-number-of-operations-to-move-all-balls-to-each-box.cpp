class Solution {
public:
    vector<int> minOperations(string boxes) {
        int i, j, sum=0;
        vector<int> v;
        for(i=0;i<boxes.length();++i)
        {
            sum=0;
            for(j=0;j<boxes.length();++j)
            {
                if((boxes[j]-'0')==1) 
                sum += abs(i-j);
            }
            v.push_back(sum);
        }
        return v;
    }
};