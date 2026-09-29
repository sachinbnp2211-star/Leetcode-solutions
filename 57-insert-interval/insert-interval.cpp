class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        vector<vector<int>>ans;
        if(intervals.size()==0)
        {
            ans.push_back(newInterval);
            return ans; 
        }
        else{
         int i=0;
     while(i<intervals.size()&&intervals[i][1]<newInterval[0])
     {
        ans.push_back(intervals[i]);
        i++;
     }
     int p=newInterval[0];
     int q=newInterval[1];
     while( i<intervals.size() && intervals[i][0]<=newInterval[1])
     {  p=min(p,intervals[i][0]);
        q=max(intervals[i][1],q);
        i++;
     }
     ans.push_back({p,q});
     while(i<intervals.size())
       { ans.push_back(intervals[i]);
        i++;
     }
     
     return ans;
        }

    }
};