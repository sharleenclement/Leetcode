class Solution {
public:
    double average(vector<int>& salary) {
        sort(salary.begin(), salary.end());
        int i;
        double sum=0;
        for(i=1;i<salary.size()-1;++i)
            sum+=salary[i];
        sum = sum/(salary.size()-2.0);
        return sum;
    }
};