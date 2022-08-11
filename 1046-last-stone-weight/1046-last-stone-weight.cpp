class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        int i=0, j, n=stones.size(), temp;
        while(n>1)
        {
            sort(stones.begin(), stones.end());
            // for(j=0;j<n;++j)
            // {
            //     cout << stones[j] << " ";
            // }
            if(stones[n-i-1]==stones[n-i-2])
            {
                stones.pop_back();
                stones.pop_back();
                n = n-2;
            }
            else
            {
                temp = stones[n-i-2];
                stones.erase(stones.end()-2);
                n--;
                // cout << temp << endl;
                stones[n-i-1] -= temp;
            }
        }
        // for(j=0;j<n;++j)
        // {
        //     cout << stones[j] << " ";
        // }
        if(n==0)
            return 0;
        
        return stones[i];
    }
}; // 1 1 2 4 1
// 1 1 1 2 4