class Solution {
public:
    vector<vector<int>> generate(int n) {
        vector<vector<int>> ans;
        ans.push_back({1});
        for(int i = 1; i < n; ++i){
            vector<int> add(i+1);
            for(int j = 0; j <= i; ++j){
                if(j == 0 || j == i){
                    add[j] = 1;
                }
                else
                    add[j] = ans[i-1][j-1] + ans[i-1][j];
            }
            ans.push_back(add);
        }
        return ans;
    }
};