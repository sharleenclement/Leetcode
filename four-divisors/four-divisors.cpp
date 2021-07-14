class Solution {
public:
    int sumFourDivisors(vector<int>& nums) {
        int n = nums.size();
        int i, j, sum, k, ans = 0;
        for(i=0;i<n;++i)
        {
            sum = 0;
            k = 0;
            for(j=1;j<=sqrt(nums[i]);++j)
            {
                if(k>4)
                    break;
                if(nums[i]%j==0)
                {
                    if(nums[i]/j==j)
                    {
                        sum += j;
                        k++;
                    }
                    else
                    {
                        sum += (nums[i]/j) + j;
                        k+=2;
                    }
                }
            }
            if(k==4)
                ans += sum;
        }
        return ans;
    }
};