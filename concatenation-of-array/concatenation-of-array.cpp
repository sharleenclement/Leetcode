class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n = nums.size();
        for(int i=0;i<n;++i)
        {
            nums.push_back(nums[i]);
        }
        return nums;
    }
};

/*
Approach:
1.  Two for loops: 
    1st loop will run 2 times and 2nd loop will run nums.size() times. 
    TC: O(2*N) = O(N), SC: O(N)
2.  In place:
    Run loop from nums.size() + 1 and go till 2*nums.size() and copy elements from 0 to nums.size(). 
    TC: O(N), SC: O(1)
3.  */