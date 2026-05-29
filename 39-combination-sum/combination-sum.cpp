class Solution {
public:
 void combi(int i,int &n,int tar,vector<int>& candidates,vector<int>& ans,vector<vector<int>> &getall)
 {
     if(tar==0)
     {
        getall.push_back(ans);
        return;
     }
     if(tar<0||i>=n)
     {
        return;
     }
     
        ans.push_back(candidates[i]);
        combi(i,n,tar-candidates[i],candidates,ans,getall);
        ans.pop_back();
        combi(i+1,n,tar,candidates,ans,getall);

     
 }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int>ans;
        vector<vector<int>>getall;
        int n=candidates.size();
        combi(0,n,target,candidates,ans,getall);

        return getall;

        
    }
};