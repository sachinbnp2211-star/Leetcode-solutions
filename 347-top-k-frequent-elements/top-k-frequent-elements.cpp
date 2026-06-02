class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        vector<int>res;
        for(int val:nums)
        {
            mp[val]++;
        }
        priority_queue<pair<int,int>>pq;
        for(auto it:mp)
        {
            pq.push({it.second,it.first});
        }
        for(int i=1;i<=k;i++)
        {
            res.push_back(pq.top().second);
            pq.pop();
        }
        return res;

        
    }
};