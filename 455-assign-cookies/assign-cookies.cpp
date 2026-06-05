class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        int total=0;
        int i=0;
        int j=0;
        while(j<s.size()&&i<g.size())
        {
            if(s[j]>=g[i])
            {
                total+=1;
                i++;
                j++;
            }
            else if(s[j]<g[i])
            {
                j++;
            }
        }
        return total;
        
        
    }
};