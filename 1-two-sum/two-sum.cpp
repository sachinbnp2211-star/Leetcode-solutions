class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for (int i =0; i<nums.size(); i++)
        {
            for (int j= i+1; j<nums.size(); j++)
            {if ( target == nums.at(i)+ nums.at(j))
            return {i,j};
            }

        }
        //mtjghv
        return {-1,-1};
        
    }
    
};