class Solution {
public:
    int largestSumAfterKNegations(vector<int>& nums, int k) {
        priority_queue<int, vector<int>, greater<int>> pq(nums.begin(), nums.end()); 
        // min heap
        int top, ans=0;
        
        while(k--)
        {
            top = pq.top();
            pq.pop();
            
            pq.push(-1*top);
        }
        
        while(!pq.empty())
        {
            top = pq.top();
            ans += top;
            pq.pop();
        }
        
        return ans;
    }
};