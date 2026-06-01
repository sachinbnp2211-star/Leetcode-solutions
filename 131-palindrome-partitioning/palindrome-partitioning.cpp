class Solution {
public:
 bool palindrome(string &s,int st,int end)
 { while(st<end)
 {

 
    if(s[st]!=s[end])
    {
        return false;
    }
    st++;
    end--;
 }
  return true;
 }
  void partition(int index,int n,string& s, vector<string>& ans,vector<vector<string>>& res)
  {
    if(index==n)
    {
        res.push_back(ans);
        return;
    }
    for(int i=index;i<n;i++)
    {
        if(palindrome(s,index,i))
        {
            ans.push_back(s.substr(index,i-index+1));
            partition(i+1,n,s,ans,res);
            ans.pop_back();
        }

    }


  }
    vector<vector<string>> partition(string s) {
        vector<string> ans;
        vector<vector<string>> res;
        int n=s.size();
        partition(0,n,s,ans,res);
        return res;

        
    }
};