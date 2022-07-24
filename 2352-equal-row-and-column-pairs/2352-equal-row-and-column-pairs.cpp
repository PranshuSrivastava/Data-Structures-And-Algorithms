class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        int ans = 0;
        for(int i = 0; i < m; ++i){
            for(int j = 0; j < n; ++j){
                int flag = 1;
                for(int k = 0; k < n; ++k)
                    if(grid[i][k] != grid[k][j])
                        flag = 0;
                ans += flag;
            }
        }
        return ans;
    }
};