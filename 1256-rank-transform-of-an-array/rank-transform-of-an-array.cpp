class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        
        unordered_map<int,int>mp;
        for(int val:arr)
        {
            mp[val]++;
        }
        priority_queue<int>pq;
        for(auto it:mp)
        {
            pq.push(it.first);

        }
        unordered_map<int,int>r;
        while(!pq.empty())
        {
          r[pq.top()]=pq.size();
          pq.pop();  
        }
        for(int i=0;i<arr.size();i++)
        {
            arr[i]=r[arr[i]];
        }
        return arr;

        

        
    }
};