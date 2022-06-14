class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        int n = triangle.size();
        vector<vector<int>> dp(n, vector<int> (n,-1));
        return dfs(0, 0, n, triangle,dp);
    }
    int dfs(int i, int j, int n, vector<vector<int>>& triangle, vector<vector<int>>& dp){
        if(i == n-1)
            return triangle[i][j];
        if(dp[i][j] != -1)
            return dp[i][j];
        int first = triangle[i][j] + dfs(i + 1, j, n, triangle, dp);
        int second = triangle[i][j] + dfs(i + 1, j + 1, n, triangle, dp);
        dp[i][j] = min(first, second);
        return dp[i][j];
    }
};