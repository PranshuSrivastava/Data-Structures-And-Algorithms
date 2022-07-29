class Solution {
public:
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        int n = graph.size();
        vector<int> adj[n];
        vector<int> outdegree(n);
        for(int i = 0; i < n; ++i){
            for(auto it: graph[i]){
                outdegree[i]++;
                adj[it].push_back(i);
            }
        }
        vector<int> ans;
        queue<int> q;
        for(int i = 0; i < n; ++i){
            if(!outdegree[i])
                q.push(i);
        }
        while(q.size()){
            int node = q.front();
            q.pop();
            ans.push_back(node);
            for(auto it : adj[node]){
                cout<<it<<endl;
                outdegree[it]--;
                cout<<outdegree[it];
                if(outdegree[it] == 0)
                    q.push(it);
            }
        }
        sort(ans.begin(), ans.end());
        return ans;
    }
};