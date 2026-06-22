class Solution {
public:
    int maxDistance(string moves) {
        int dis=0;
        int x=0;
        int y=0;
        int total=0;
        for(int i=0;i<moves.size();i++)
        {
            if(moves[i]=='U')
            {
                y+=1;
            }
        if(moves[i]=='D')
            {
                y-=1;
            }
         if(moves[i]=='L')
            {
                x-=1;
            }
         if(moves[i]=='R')
            {
                x+=1;
            }
             if(moves[i]=='_'){
                total+=1;
            }
        }
     return abs(x)+abs(y)+total;


        
        
    }
};