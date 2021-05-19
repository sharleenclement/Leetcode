class Solution {
public:
    int busyStudent(vector<int>& startTime, vector<int>& endTime, int queryTime) {
        int i, c=0;
        for(i=0;i<startTime.size();++i)
        {
            if(startTime[i]<=queryTime)
            {
                if(endTime[i]>=queryTime)
                    c++;
            }
            else
                continue;
        }
        return c;
    }
};