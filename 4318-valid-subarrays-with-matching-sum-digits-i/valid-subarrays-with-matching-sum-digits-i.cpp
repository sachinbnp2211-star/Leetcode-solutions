class Solution {
public:

    int countValidSubarrays(vector<int>& nums, int x) {
        vector<long long>sub;

        for(int i=0;i<nums.size();i++)
        {long long sum=0;
            for(int j=i;j<nums.size();j++)
            { 
                sum += nums[j];
                sub.push_back(sum);

            }
        }
        int count=0;
        for(int i=0;i<sub.size();i++)
        {
            if(sub[i]%10==x)
            { long long temp=sub[i];
                while(temp>=10)
                {
                    temp/=10;
                }
                if(temp==x)
                {
                    count++;
                }
                
            }
        }
        return count;
        
        
    }
};