class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        vector<int>ans;
        long long XOR_ALL=0;
        for(int i=0;i<nums.size();i++)
        {
            XOR_ALL^=nums[i];
        }
        long long rightmost=(XOR_ALL&(XOR_ALL-1))^XOR_ALL;
        int a=0;
        int b=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]&rightmost)
            {
                a=a^nums[i];
            }
            else{
                b=b^nums[i];
            }
        }
        ans.push_back(a);
        ans.push_back(b);
        return ans;
        
    }
};