class Solution {
public:
    int jump(vector<int>& nums) {
        int count=0;
        int furthest=0;
        int current=0;
        if(nums.size()==1)
        {
            return 0;
        }
        
        
        for(int i=0;i<nums.size();i++)
        {
            furthest=max(furthest,nums[i]+i);
            if(i==current)
            {
            current=furthest;
            count+=1;
            if(current>=nums.size()-1)
            { return count;
                break;
                

            }
            }

        }
        
       
    
        
        



        
       
            
        
        
        return 0;



        
    }
};