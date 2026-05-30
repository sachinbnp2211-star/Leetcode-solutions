class Solution {
public:
void letter(int i,int n,string& ans,vector<string>& res,string& digits)
{
   unordered_map<char,string>m;
    m['2']="abc";
    m['3']="def";
    m['4']="ghi";
    m['5']="jkl";
    m['6']="mno";
    m['7']="pqrs";
    m['8']="tuv";
    m['9']="wxyz";
    if(i==n)
    {
      res.push_back(ans);
      return;
    }
    for(char ch:m[digits[i]])
    {
        ans.push_back(ch);
        letter(i+1,n,ans,res,digits);
        ans.pop_back();

    }
    






}
  
    vector<string> letterCombinations(string digits) {
        string ans;
        int n=digits.size();
        vector<string>res;
        letter(0,n,ans,res,digits);
        return res;

        
    }
};