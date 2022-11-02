class Solution {
public:
    int m, n;
    bool isValid(int i, int j){
        if(i >= m || i < 0 || j >= n || j <0)
            return 0;
        return 1;
    }
    vector<vector<int>> d = { {-1, -1}, {-1, 0}, {-1, 1}, {0, -1}, {0,1}, {1, -1}, {1, 0}, {1, 1}};
    void dfs(vector<vector<char>>& board, int i, int j){
    if(!isValid(i, j) || board[i][j] != 'E')
        return;
        
        int count = 0;
        for(auto x: d){
            if(isValid(i + x[0], j + x[1])){
            if(board[i + x[0]][j + x[1]] == 'M')
                ++count;
            }
     
        }
        if(count > 0){
            board[i][j] = count + '0';
            return;
        }
        board[i][j] = 'B';
        for(auto x: d){
            dfs(board, i + x[0], j + x[1]);
        }
        
        
    }
    vector<vector<char>> updateBoard(vector<vector<char>>& board, vector<int>& click) {
        if(board[click[0]][click[1]] == 'M' )
        {
            board[click[0]][click[1]] = 'X';
            return board;
        }
        m = board.size();
        n = board[0].size();
        dfs(board, click[0], click[1]);
        return board;
    }
};