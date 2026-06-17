class Solution {
public:
    void prefix(vector<int>& nums,vector<int>&v)
    {
        v[0]=1;
        for(int i=1;i<nums.size();i++)
        {
            v[i]=v[i-1]*nums[i-1];
        }
        int suffix = 1;
        for(int i = v.size() - 1; i >= 0; i--) {
            v[i] *= suffix;
            suffix *= nums[i];
        
    }
    }
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int>v(nums.size());
        prefix(nums,v);
        
        return v;
        

       
        


        
    }
};