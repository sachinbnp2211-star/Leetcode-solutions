class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int currsum=0;
        int total=0;
        
        unordered_map<int,int>mp;
        mp[0]=1;
        for(int i:nums)
        {
            currsum+=i;
        
            if(mp.find(currsum-k)!=mp.end())
            {
                total+=mp[currsum-k];
            }
            mp[currsum]++;

        }
        return total;

        
    }
};