class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int slow = nums[0], fast = nums[nums[0]];
        
        if(nums.size()>1)
        {
            while(slow!=fast)
            {
                slow = nums[slow]; // 1 step
                fast = nums[nums[fast]]; // 2 steps
            }
            
            fast = 0;
            while(slow!=fast)
            {
                slow = nums[slow]; 
                fast = nums[fast];
            }
        }
        
        return slow;
    }
};