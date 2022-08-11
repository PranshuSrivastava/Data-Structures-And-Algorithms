class Solution {
public:
    int reachableNodes(int n, vector<vector<int>>& edges, vector<int>& restricted) {
        int count = 0;
        vector<int> adj[n];
        for(int i = 0; i < edges.size(); ++i){
            adj[edges[i][0]].push_back(edges[i][1]);
            adj[edges[i][1]].push_back(edges[i][0]);
        }
        vector<int> vis(n);
        for(int i : restricted)
            vis[i] = 1;
        queue<int> q;
        q.push(0);
        while(!q.empty()){
            int i = q.front();
            q.pop();
            vis[i] = 1;
            ++count;
            for(int j: adj[i]){
                if(!vis[j])
                    q.push(j);
            }
        }
        return count;
    }
};