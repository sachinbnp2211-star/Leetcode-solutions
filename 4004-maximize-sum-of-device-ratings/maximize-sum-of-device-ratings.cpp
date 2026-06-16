class Solution {
public:
    long long maxRatings(vector<vector<int>>& units) {
        long long sum=0;
        long long min1=INT_MAX;
        long long min2=INT_MAX;
        vector<long long>op;
        int n=units.size();
        int m=units[0].size();
        if(m==1)
        { long long e=0;
            for(auto it:units)
            {
                e+=(long long)it[0];

            }
            return e;
        }


        for(int i=0;i<n;i++)
        {
            long long mf=INT_MAX;
            long long ms=INT_MAX;
            for(int j=0;j<units[i].size();j++)
            { int x=units[i][j];
                
                if(x<mf)
                {
                    ms=mf;
                    mf=x;
                }
                else if(x<ms)
                {
                    ms=x;
                }
            }
            sum+=ms;
            min1=min(mf,min1);
            min2=min(ms,min2);
            





            }
            
            long long res=sum+min1-min2;
            return res;
        
        
    }
};