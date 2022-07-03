class Solution {
    int[] dp;
    int mod = (int)1e9 + 7;
    public int countHousePlacements(int n) {
        dp = new int[n+1];
        Arrays.fill(dp, -1);
        int ret = solve(n);
        return (int)(((long)ret * (long)ret) % mod);
    }
    
    int solve(int left) {
        if(left <= 0)
            return 1;
        if(dp[left] != -1)
            return dp[left];
        return dp[left] = (solve(left - 2) + solve(left - 1)) % mod;
        
        
        
    }
}