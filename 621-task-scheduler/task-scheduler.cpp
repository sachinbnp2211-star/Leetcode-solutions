class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        unordered_map<char,int>freq;
        for(char ch:tasks)
        {
            freq[ch]++;
        }
        priority_queue<pair<int,char>>pq;
        for(auto p:freq)
        {
            pq.push({p.second,p.first});
        }
        int sz=pq.size();
        int count=1;
        int maxfreq=pq.top().first;
        int p=maxfreq;
        pq.pop();
       
        while(!pq.empty())
        { if(pq.top().first==p)
        {
            count+=1;
        }
        pq.pop();
            
        }
        int res=(maxfreq-1)*(n+1) + count;
        int b=max((int)tasks.size(),res);
        return b;

        


        
        
    }
};