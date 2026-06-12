class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int>st;
        unordered_set<int>vt;
        vector<int>v;

        

       for(int v:nums1)
       {
        if(st.find(v)!=st.end())
        {
            continue;
        }
        else{
            st.insert(v);
        }

       } 
       for(int v:nums2)
       {
        if(vt.find(v)!=vt.end())
        {
            continue;
        }
        else{
            vt.insert(v);
        }

       } 
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