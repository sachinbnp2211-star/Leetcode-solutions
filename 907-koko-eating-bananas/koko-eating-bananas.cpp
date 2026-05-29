class Solution {
public:
bool speedo(vector<int>& piles, int &h,int speed)
{ long long hours=0;


   for(int banana:piles)
   {
    hours+=(banana+speed-1)/speed;
   }
   return hours<=h;
}
    int minEatingSpeed(vector<int>& piles, int h) {
        sort(piles.begin(),piles.end());
        int st=1;
        int n=piles.size();
        int end=piles[n-1];
        int ans;
        while(st<=end)
        {
            int mid=st+(end-st)/2;
            if(speedo(piles,h,mid))
            {
                ans=mid;
                end=mid-1;
            }
            else{
                st=mid+1;
            }


        }
       
    
         
        


       return ans; 

        
    }
};