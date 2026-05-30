class Solution {
public:
    bool check(vector<int>& nums) {
        int k;
        if(nums.size()==1)
        {
            return true;
        }
        for(int i=0;i<nums.size()-1;i++)
        {
            if(nums[i]>nums[i+1])
            {
                k=i+1;
                break;

            }
            
        }
        rotate(nums.begin(),nums.begin()+k,nums.end());
        for(int j=0;j<nums.size()-1;j++)
        {
            if(nums[j]>nums[j+1])
            {
                return false;
            }

        }
        return true;
        


        
    }
};