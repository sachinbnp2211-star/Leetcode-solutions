class Solution {
public:
    int getLength(vector<int>& nums) {
        int ans=1;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            unordered_map<int,int>freq;
            map<int,int>ff;
            for(int k=i;k<n;k++)
            { int j=nums[k];
                if(freq[j]>0)
                {
                    ff[freq[j]]--;
                

                
                if(ff[freq[j]]==0)
                {
                
                    ff.erase(freq[j]);
                }
                }
                
                
               
                ff[++freq[j]]++;
                if(freq.size()==1)
                {
                    ans=max(ans,k-i+1);
                    continue;
                }
                if(ff.size()==2)
                { auto it=ff.begin();
                    
                    int f1=it->first;
                    ++it;
                    int f2=it->first;
                    if(f2==2*f1)
                    {
                        ans=max(ans,k-i+1);

                    }
                }
                

            }
        }
        return ans;
        
    }
};