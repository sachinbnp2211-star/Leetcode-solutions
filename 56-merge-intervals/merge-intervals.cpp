class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        vector<vector<int>>ans;
        vector<int> previous=intervals[0];
        for(int i=1;i<intervals.size();i++)
        {
            if(intervals[i][0]<=previous[1])
            {
             previous[1]=max(intervals[i][1],previous[1]);
            }
            else{
                ans.push_back(previous);
                previous=intervals[i];
            }
        } 
         ans.push_back(previous);
            return ans;
    }
};