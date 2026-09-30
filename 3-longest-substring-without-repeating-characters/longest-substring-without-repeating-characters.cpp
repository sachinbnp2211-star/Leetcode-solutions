class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char>st;
        int maxlen=INT_MIN;
        int n=s.length();
        int left=0;
        for(int i=0;i<n;i++)
        {
            while(st.count(s[i]))
            {
                 st.erase(s[left]);
                 left++;
            }
            st.insert(s[i]);
            maxlen=max(maxlen,(int)st.size());
        }
        return max((int)st.size(),maxlen);
        
    }
};