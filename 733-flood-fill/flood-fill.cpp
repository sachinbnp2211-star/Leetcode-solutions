class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int n=image.size();
        int m=image[0].size();
        
        vector<vector<int>> vis(n, vector<int>(m, 0));
        int c=image[sr][sc];
        if(c==color)
        {
            return image;
        }
        image[sr][sc]=color;
        queue<pair<int,int>>q;
        q.push({sr,sc});
        vis[sr][sc]=1;
        int drow[]={-1,0,1,0};
        int dcol[]={0,1,0,-1};
        while(!q.empty())
        { int row=q.front().first;
          int col=q.front().second;
             
             q.pop();
             for(int i=0;i<4;i++)
             {
               int nrow=row+drow[i];
               int ncol=col+dcol[i];
               if(nrow>=0&&nrow<n&&ncol>=0&&ncol<m&&vis[nrow][ncol]!=1&&image[nrow][ncol]==c)
               {
                 q.push({nrow,ncol});
                 image[nrow][ncol]=color;
                 vis[nrow][ncol]=1;
               }
             }

        }
        return image;



    }
};