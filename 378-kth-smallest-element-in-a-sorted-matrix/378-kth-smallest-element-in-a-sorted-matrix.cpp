class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        priority_queue<int, vector<int>, greater<int>> q;
        int m = matrix.size();
        int n = matrix[0].size();
        for(int i = 0; i < m; ++i){
            for(int j = 0; j < n; ++j){
                q.push(matrix[i][j]);
            }
        }
        cout<<q.top();
        for(int i = 0; i < k - 1; ++i)
        {
            q.pop();
        }
        return q.top();
    }
};