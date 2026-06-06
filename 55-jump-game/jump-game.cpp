class Solution {
public:
    bool canJump(vector<int>& nums) {
        if(nums.size()==1)
        {
            return true;
        }
        int i=0;
        int j=0;
        int furthest=0;
        for(int i=0;i<nums.size();i++)
        { if(i>furthest)
        {
            return false;
        }
            furthest=max(furthest,nums[i]+i);
            if(furthest>=nums.size()-1)
            {
                return true;
            }


        }
            
    return false;
        
    }
};