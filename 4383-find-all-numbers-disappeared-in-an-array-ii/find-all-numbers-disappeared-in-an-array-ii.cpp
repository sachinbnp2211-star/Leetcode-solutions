class Solution {
public:
    vector<vector<int>> findDisappearedNumbers(vector<int>& nums, int lower, int upper) {
        vector<vector<int>>vec;
        vector<int>p;
       
        vector<int>arr;
        int n=nums.size();
        
        vector<int>ans;
        
        sort(nums.begin(),nums.end());
        
        for(int i=lower;i<=upper;i++)
        {
            arr.push_back(i);
        }
        int j=0;
        for(int i=0;i<arr.size();i++)
        { while (j < nums.size() && nums[j] < arr[i]) {
                j++;
            }
            if(j<nums.size()&&nums[j]==arr[i])
            {
                j++;
                if(arr[i]!=lower)
                {
                    ans.push_back(lower);
                    ans.push_back(arr[i]-1);
                    vec.push_back(ans);
                    ans.clear();

                }
                lower=arr[i]+1;
                

                
            }
        }
        if(lower<=upper)
        {ans.push_back(lower);
        ans.push_back(upper);
        vec.push_back(ans);}

        
        return vec;




        
    }
};