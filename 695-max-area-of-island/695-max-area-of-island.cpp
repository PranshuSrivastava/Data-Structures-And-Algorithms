class Solution {
public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        int ans = 0;
        for(int i = 0; i < m; ++i){
            for(int j = 0; j < n; ++j){
                if(grid[i][j] == 1)
                {
                    ans = max(ans, count(grid, i, j, m, n));
                }
            }
        }
        return ans;
    }
    int count(vector<vector<int>>& grid, int i, int j, int m, int n){
        cout<<i<<" "<<j<<endl;
        if(i < 0 or j < 0 or i >= m or j >= n or grid[i][j] == 0)
            return 0;
        grid[i][j] = 0;
        return 1 + count(grid, i, j - 1, m, n)  + count(grid, i, j + 1, m, n) +  count(grid, i + 1, j, m, n) + count(grid, i - 1, j , m, n);
    }
};