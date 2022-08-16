class Solution {
public:
    int largestSumAfterKNegations(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int i, sum=0, c=0, z=0;
                
        for(i=0;i<nums.size();++i)
        {
            if(nums[i]<0)
                c++;
            else if(nums[i]==0)
                z++;
            else
                break;
        }
        
        if(c==k or (c<k and z>0))
        {
            for(i=0;i<nums.size();++i)
            {
                sum = sum + abs(nums[i]);
            }
        }
        else if(c>k)
        {
            for(i=0;i<nums.size();++i)
            {
                if(k>0)
                {
                    sum = sum + abs(nums[i]);
                    k--;
                }
                else 
                    sum += nums[i];
            }
        }
        else
        {
            for(i=0;i<nums.size();++i)
            {
                if(k>0)
                {
                    if(c>0)
                    {
                        nums[i] = abs(nums[i]);
                        sum = sum + nums[i];
                        k--;
                        c--;
                    }
                    else
                    {
                        if(k%2==0)
                        sum += nums[i];
                        else
                        {
                            if(i>0 && nums[i]>nums[i-1])
                            {
                                sum += -(nums[i-1]*2);
                                i--;
                            }
                            else
                                sum += -nums[i];
                        }
                        k=0;
                    }
                }
                else 
                    sum += nums[i];
            }
            if(k>0)
            {
                nums[i-1] = k%2==0?nums[i-1]:-(nums[i-1]*2);
                sum += nums[i-1];
            }    
            
        }

        return sum;
    }
};
// if(k>0 && nums[i]<0)
// {
//     nums[i] = -nums[i];
//     k--;
// }
// else if(nums[i]>0)
// sum += nums[i];
// nums[0] = k%2==0?nums[0]:-nums[0];
//             for(i=0;i<nums.size();++i)
//             {
//                 sum = sum + nums[i];
//             }