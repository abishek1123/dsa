class Solution {
public:
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n ;
        n=isConnected.size();
        int i = 0 ; 
        int j = 0 ; 
        int count=0;
        queue<int> q ; 
        vector<int> bfs ; 
        vector<bool> vis(n,false);

        for(i=0;i<n;i++)
        {
            if(vis[i]==false)
            {
                q.push(i);
                vis[i]=true;
                count++;

                while(!q.empty())
                {
                    int node = q.front();
                    q.pop();
                    for(j=0;j<n;j++)
                    {
                        if(isConnected[node][j]==1 && vis[j]==false)
                        {
                            vis[j]=true;
                            q.push(j);

                        }
                    }
                }
            }
        }
        return count ;
    }
};