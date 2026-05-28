class Solution {
public:
   void sud(int i,int n,vector<int>& nums,vector<int> &ans,vector<vector<int>> &subsets)
   { 
     if(i==n)
     {
       subsets.push_back(ans);
       return; 
     }
     ans.push_back(nums[i]);
     sud(i+1,n,nums,ans,subsets);
     ans.pop_back();
     sud(i+1,n,nums,ans,subsets);


   }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>getall;
        vector<int>ans;
        int p=nums.size();
        sud(0,p,nums,ans,getall);
        return getall;
        
        
    }
};