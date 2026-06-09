class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
sort(intervals.begin(),intervals.end());
        vector<vector<int>>p;
        int i=0;
        int n= intervals.size();
        while(i<n)
        {
            if(p.empty()||p.back()[1]<intervals[i][0])
            {
                p.push_back(intervals[i]);
            }
            if(!p.empty()&&p.back()[1]>=intervals[i][0])
            {
                p.back()[1]=max(p.back()[1],intervals[i][1]);
            }
            i++;
        }
        return p;
    }
};