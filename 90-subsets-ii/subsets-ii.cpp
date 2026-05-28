class Solution {
public:
void subset(int i,int n,vector<int>& nums,vector<int>& ans,vector<vector<int>>& getall)
{
    if(i==n)
    {
      getall.push_back(ans);
      return;
    }
    ans.push_back(nums[i]);
    subset(i+1,n,nums,ans,getall);
    ans.pop_back();
    
    while(i+1<nums.size()&&nums[i]==nums[i+1])

    {
       
        i++;
    }
    subset(i+1,n,nums,ans,getall);

}
 
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int>ans;
        int p=nums.size();
        vector<vector<int>>getall;

        subset(0,p,nums,ans,getall);
        return getall;
        
    }
};