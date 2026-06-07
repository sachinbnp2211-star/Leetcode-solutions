class Solution {
public:
    void v(int i,int n,int k,string &p ,vector<string>&l )
    {
        if(i==n)
        {
            l.push_back(p);
            return;
        }
        p=p+"0";
        v(i+1,n,k,p,l);
        p.pop_back();
        int w=i+1;
        if(p.empty() || p.back() != '1')
        {
        
        p=p+"1";
        
        
           
        
        v(i+1,n,k,p,l);
        
        
        p.pop_back();
        }
    }
    
    
    vector<string> generateValidStrings(int n, int k) {
        string p="";
        vector<string>l;
        v(0,n,k,p,l);
        vector<string>o;
        for(int i=0;i<l.size();i++)
            { int cost=0;
                for(int j=0;j<l[i].size();j++)
                    {
                         int digit=l[i][j]-'0';
                        cost+=digit*j;
                        
                    }
             if(cost<=k)
             { 
                 o.push_back(l[i]);
             }
             
             
                
            }
        // for(int v=0;v<o.size();v++)
        //     {
        //         for(int y=1;y<o[v].size();y++)
        //             {
        //                 if(o[v][y]=='1'&&o[v][y+1]=='1')
        //                 {
        //                     o.erase(o.begin()+v);
                            
        //                 }
        //             }
        //     }
       

        
        return o;
        
        
        
    }
};