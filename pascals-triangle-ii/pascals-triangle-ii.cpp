class Solution {
public:
    vector<int> getRow(int n) {
        int res[n+1][n+1];
        vector<int> ans;
        for(int line = 0; line <= n;line++){
            for(int i = 0; i<=line ; i++){
                if(i == 0 || i==line)
                {
                    res[line][i] = 1;
                }
                else{
                    res[line][i] = res[line-1][i-1] + res[line-1][i];
                }
            }
        }
        for(int i = 0;i<=n;i++){
            ans.push_back(res[n][i]);
        }
        return ans;
    }
};