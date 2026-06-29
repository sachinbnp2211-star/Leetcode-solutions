class Solution {
public:
    long long maxSum(vector<int>& nums, int k, int mul) {
        sort(nums.begin(),nums.end(),greater<int>());
        long long sum=0;
        for(int i=0;i<min(k,int(nums.size()));i++)
        {
            if(mul>0)
            { sum+=1LL*nums[i]*mul;
            mul--;

            }
            else{
                sum+=nums[i];
            }
        }
        return sum;

        
    }
};