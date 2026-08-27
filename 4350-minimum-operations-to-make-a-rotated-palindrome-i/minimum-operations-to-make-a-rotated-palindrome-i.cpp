class Solution {
public:
    int minOperations(string s) {
        int n=s.length();
    
        int cnt=INT_MAX;
        for(int i=0;i<n;i++)
        {  int cost=i;
           for(int j=0;j<n/2;j++)
           {
             int a=s[(i+j)%n];
             int b=s[(n+i-1-j)%n];
             cost+=min(abs(a-b),26-abs(a-b));
           }
           cnt=min(cnt,cost);
        

        }
        return cnt;
        
    }
};