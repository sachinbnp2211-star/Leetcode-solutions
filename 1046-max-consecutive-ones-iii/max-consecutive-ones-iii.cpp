class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int left=0;
        int i=0;
        int maxo=INT_MIN;
        int cnt=0;
        while(i<nums.size())
        {
            if(nums[i]==1)
            {
               cnt++;
            }
            else if(nums[i]==0)
            {
                if(k>0)
                {
                    cnt++;
                    k--;
                }
                else{
                    maxo=max(maxo,cnt);
                    while(nums[left]==1)
                   {
                       left++;
                       cnt--;
                   }
                //    k++;
                   cnt++;
                   left++;
                   cnt--;
                }
            }
            i++;
        }
        maxo=max(maxo,cnt);
        return maxo;
    }
};