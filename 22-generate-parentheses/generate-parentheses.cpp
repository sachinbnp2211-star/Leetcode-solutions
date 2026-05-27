class Solution {
public:
 void backtrack(int open,int close,int &n,string s,vector<string>&res)
 {
    if(s.length()==2*n)
    {
        res.push_back(s);
        return;
    }
    if(open<n)
    {
        
        backtrack(open+1,close,n,s+'(',res);

    }
    if(open>close)
    {
        
        backtrack(open,close+1,n,s+')',res);

    }
 }
    vector<string> generateParenthesis(int n) {
        vector<string>ans;
        string curr="";
        backtrack(0,0,n,curr,ans);
        
        return ans;
    }
};