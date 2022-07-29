class Solution {
public:
    bool possibleBipartition(int n, vector<vector<int>>& dislikes) {
        vector<int> coloring(n + 1, 0);
        vector<int> adj[n + 1];
        for(int i = 0; i < dislikes.size(); ++i){
            adj[dislikes[i][0]].push_back(dislikes[i][1]);
            adj[dislikes[i][1]].push_back(dislikes[i][0]);
        }
        for(int i = 1; i <= n; ++i){
            if(!coloring[i])
            {
                coloring[i] = 1;
                if(!dfs(i, adj, coloring))
                    return 0;
            }
        }
        return 1;
    }
    bool dfs(int n, vector<int> adj[], vector<int>& coloring){
        cout<<n;
        {
            for(int ch: adj[n]){
                if(!coloring[ch]){
                    coloring[ch] = -coloring[n];
                    if(!dfs(ch, adj, coloring))
                        return 0;
                }
                else if(coloring[ch] == coloring[n])
                    return 0;
            }
            
        }
        return 1;
            
    }
};