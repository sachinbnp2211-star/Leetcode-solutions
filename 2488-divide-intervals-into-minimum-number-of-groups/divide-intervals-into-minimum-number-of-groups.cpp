class Solution {
public:
    int minGroups(vector<vector<int>>& intervals) {
     vector<int>start;
     vector<int>end;
      int n=intervals.size();
     for(int i=0;i<n;i++)
     {
        start.push_back(intervals[i][0]);
        end.push_back(intervals[i][1]);
     }
     sort(start.begin(),start.end());
      sort(end.begin(),end.end());
        int cnt=0;
        int i=0;
        int j=0;
        int maxcnt=0;
        while(i<n)
        {
            if(start[i]<=end[j])
            {
                i++;
                cnt++;
                maxcnt=max(cnt,maxcnt);
            }
            else{
                j++;
                cnt--;
            }
            
        }
        return maxcnt;
       
    }
};