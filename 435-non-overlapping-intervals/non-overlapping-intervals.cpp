class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
       sort(intervals.begin(),intervals.end(),[](const auto &a,const auto &b)
       {
         return a[1]<b[1];
       });
       int cnt=0;
       int last=intervals[0][1];
       for(int i=1;i<intervals.size();i++)
       {
         if(intervals[i][0]>=last)
         {
            cnt++;
            last=intervals[i][1];
         }
       }
     return (((int)intervals.size()-cnt-1));
    }
};