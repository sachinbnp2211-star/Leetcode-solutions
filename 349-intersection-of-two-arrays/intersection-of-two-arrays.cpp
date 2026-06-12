class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int>st(nums1.begin(),nums1.end());
        unordered_set<int>vt(nums2.begin(),nums2.end());
        vector<int>v;

        

    
       for(auto i:st)
       {
        if(vt.find(i)!=vt.end())
        {
          v.push_back(i);

        }
       }
     return v;
        
    }
};