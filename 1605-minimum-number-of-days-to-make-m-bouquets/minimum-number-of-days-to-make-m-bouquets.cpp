class Solution {
public:
bool flower(int m,int k,vector<int>& bloomDay,int day)

{  int cnt=0;
int b=0;
   for(int i=0;i<bloomDay.size();i++)
   { 
      if(bloomDay[i]<=day)
      {
        cnt++;
        if(cnt==k)
        {
            b+=1;
            cnt=0;
        }
      }
      else{
        cnt=0;
      }

   }
   return b>=m;





}
    int minDays(vector<int>& bloomDay, int m, int k) {
        int st = *min_element(bloomDay.begin(), bloomDay.end());
        int end = *max_element(bloomDay.begin(), bloomDay.end());
        int total=1ll*m*k;
        
        if(total>bloomDay.size())
   {
    return -1;
   }
   int ans=-1;
        while(st<=end)
        {
            
            int mid=st+(end-st)/2;
            if(flower( m,k, bloomDay,mid))
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