class Solution {
public:
    int lastStoneWeight(vector<int>& s) {
        make_heap(s.begin(), s.end());
        while(s.size()>1)
        {
            int x = s.front();
            pop_heap(s.begin(), s.end());
            s.pop_back();
            
            int y = s.front();
            pop_heap(s.begin(), s.end());
            s.pop_back();
            
            if(x==y)
                continue;
            
            int ans = (x-y);
            s.push_back(ans);
            push_heap(s.begin(), s.end());
        }
       
        return s.size() ? s.front() : 0;
    }
};