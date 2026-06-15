class Solution {
public:
    int sum(int &n)
    { int digsum=0;
     int sqsum=0;
        while(n>0)
            {
                int dig=n%10;
                digsum+=dig;
                sqsum+=dig*dig;
               
                
                
                n=n/10;
                
                
            }
     int m=sqsum-digsum;
     return m;
    }
    bool checkGoodInteger(int n) {
        if(sum(n)>=50)
        {
            return true;
        }
        return false;
        
        
    }
};