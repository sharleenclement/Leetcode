class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        queue<int> q1;
        queue<int> q2;
        int i, k, l, n, c=0;
        for(i=0;i<students.size();++i)
        {
            q1.push(students[i]);
            q2.push(sandwiches[i]);
        }
        while(!q2.empty())
        {
            n = q1.size();
            if(q1.front()!=q2.front())
            {
                k = q1.front();
                q1.pop();
                q1.push(k);
                c++;
                if(c==n)
                    break;
            }
            else
            {
                c=0;
                q1.pop();
                q2.pop();
            }
        }
        l = q1.size();
        return l;
    }
};