class Solution {
public:
    bool canFinish(int n, vector<vector<int>>& pre) {
        vector<int> vis(n);
        vector<vector<int>> adj(n);
        for(int i = 0; i < pre.size(); ++i){
            adj[pre[i][0]].push_back(pre[i][1]);
        }
        for(int i = 0; i < n; ++i){
            if(!vis[i])
                if(dfs(adj, vis, i))
                    return 0;
        }
        return 1;
    }
    bool dfs(vector<vector<int>>& adj, vector<int>& vis, int curr){
        if(vis[curr] == 2)
            return 1;
        vis[curr] = 2;
        for(int i = 0; i < adj[curr].size(); ++i){
            if(vis[adj[curr][i]] != 1)
                if(dfs(adj, vis, adj[curr][i]))
                    return 1;
        }
        vis[curr] = 1;
        return 0;
    }
};