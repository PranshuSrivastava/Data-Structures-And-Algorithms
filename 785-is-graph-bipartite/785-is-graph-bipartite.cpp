class Solution {
public:
    bool isBipartite(vector<vector<int>>& graph) {
        int n = graph.size();
        vector<int> colored(n,0);
        for(int i = 0; i<n ; ++i){
            if(!colored[i]){
                queue<int> q;
                q.push(i);
                colored[i] = 1;
                while(!q.empty()){
                    int a = q.front();
                    q.pop();
                    for(int child:graph[a]){
                        if(!colored[child])
                        {
                            colored[child] = -colored[a];
                            q.push(child);
                        }
                            
                        else
                            if(colored[child] == colored[a])
                                return false;
                        
                    }
                }
            }
            else
                continue;
        }
        return true;
        
    }
};