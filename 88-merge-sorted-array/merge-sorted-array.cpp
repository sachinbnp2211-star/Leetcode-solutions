class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int>merge;
        if(m==0)
        {

         nums1=nums2;
          return;
        }
        if(n==0)
        {
            merge=nums1;
          
            return;
        }
        int i=0;
        int j=0;
        while(i<m&&j<n)
        {
            if(nums1[i]<=nums2[j])
            { merge.push_back(nums1[i]);
                i++;

            }
            else
            {
             merge.push_back(nums2[j]);
             j++;
            }
        }
        while(i<m)
        {
           merge.push_back(nums1[i]);
           i++;
        }
        while(j<n)
        {
           merge.push_back(nums2[j]);
           j++;
        }
        nums1=merge;
        
         
        
     
        
        
        
    }
};