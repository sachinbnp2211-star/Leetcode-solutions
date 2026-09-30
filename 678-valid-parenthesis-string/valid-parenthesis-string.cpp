class Solution {
public:
    bool checkValidString(string s) {
        int open=0;
        int star=0;
        bool pos=true;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='(')
            {
                open++;
            }
            else if(s[i]=='*')
            {
                star++;
            }
            else{
                if(open>0)
                {
                    open--;
                }
                else if(star>0)
                {
                    star--;
                }
                else 
                {
                   return false;
                }
            }
        }
        int close=0;
        bool can=true;
        int hj=0;
        for(int i=s.length()-1;i>=0;i--)
        {
            if(s[i]==')')
            {
                close++;
            }
            else if(s[i]=='*')
            {
               hj++; 
            }
            else{
                if(close>0)
                {
                    close--;
                }
                else if(hj>0)
                {
                    hj--;
                }
                else 
                {
                   return false;
                }
            }
        }
        if(pos)
        {   
            
            return true;
            
        }
        else if(can )
        {   
            return true;
        }
        return false;
        
    }
};