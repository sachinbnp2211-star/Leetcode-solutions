class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end(),
             [](vector<int>& a, vector<int>& b){
                 return a[1] < b[1];
             });
        
        

        
        vector<vector<int>>p;
        int i=0;
        int n= intervals.size();
        while(i<n)
        {
            if(p.empty()||(p.back()[1]<=intervals[i][0]))
            {
                p.push_back(intervals[i]);
            }
            i++;



        }
        int o=intervals.size()-p.size();
        return o;

        
    }
};