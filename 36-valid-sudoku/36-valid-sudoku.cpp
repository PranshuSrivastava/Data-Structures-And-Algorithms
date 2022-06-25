class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for(int i = 0; i < board.size(); ++i){
            unordered_map<char, int> row, col, box;
            for(int j = 0; j < board[0].size(); ++j){
                cout<<board[3*(i/3) + j/3][3*(i%3) + j%3]<<endl;
                if(row.count(board[i][j]) and board[i][j] != '.')
                {
                    return 0;
                }
                row[board[i][j]] = 1;
                if(col.count(board[j][i]) and board[j][i] != '.')
                {
                    cout<<"ok2";
                    return 0;
                }
                col[board[j][i]] = 1;
                if(box.count(board[3*(i/3)+j/3][3*(i%3)+j%3]) && board[3*(i/3)+j/3][3*(i%3)+j%3]!='.') return false;
                box[board[3*(i/3)+j/3][3*(i%3)+j%3]] = 1;

            }
        }
        return 1;
    }
};