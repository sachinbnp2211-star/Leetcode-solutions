class Solution {
public:
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n=isConnected.size();
     vector<int>adj[n+1];
     
      for(int i=0;i<isConnected.size();i++)
      {
         for(int j=0;j<isConnected[0].size();j++)
         {
            if(isConnected[i][j]==1)
            { adj[i+1].push_back(j+1);
             

            }
         }
      }
      int provinces=0;
      
    
      vector<int>visited(n+1,0);
      for(int i=1;i<=n;i++)
      {
        if(visited[i]==0)
        {
            provinces++;
            visited[i]=1;
              queue<int>q;
              q.push(i);
              while(!q.empty())
      {
        int node=q.front();
        q.pop();
        for(int neigh:adj[node])
        {
            if(visited[neigh]==0)
            {
            
                visited[neigh]=1;
                q.push(neigh);
            }
        }
      }

        }
      }
      
      

      return provinces
      ;   
    }
};