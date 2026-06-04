class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        if(s.size()==0)
        {
            return 0;
        }
        
        unordered_set<char>st;
        int left =0;
        int ans=0;
        for(int i=0;i<=s.size()-1;i++)
        {  while(st.count(s[i]))
           {
            st.erase(s[left]);
            left++;

          }
          
          




            st.insert(s[i]);
            ans=max(i-left+1,ans);
            
        }
        return ans;
        
    }
};