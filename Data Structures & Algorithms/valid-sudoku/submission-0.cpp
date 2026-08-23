class Solution {
   public:
    bool checkcolumn(vector<vector<char>>& board, int col) {
        vector<int> visited(10, -1);
        for (int i = 0; i < 9; i++) {
            if (board[i][col] == '.') continue;
            if (visited[board[i][col] - '0'] != -1) return false;
            visited[board[i][col] - '0'] = 1;
        }
        return true;
    }
    bool checkrow(vector<vector<char>>& board, int row) {
        vector<int> visited(10, -1);
        for (int i = 0; i < 9; i++) {
            if (board[row][i] == '.') continue;
            if (visited[board[row][i] - '0'] != -1) return false;
            visited[board[row][i] - '0'] = 1;
        }
        return true;
    }
    bool checkminibox(vector<vector<char>>& board, int idx) {
        vector<int> visited(10, -1);
        int startrow=(idx/3)*3;
        int startcol=(idx%3)*3;
        for (int i = startrow; i < startrow+3; i++) {
            for(int j=startcol;j<startcol+3;j++){
                if(board[i][j]=='.') continue;
                if (visited[board[i][j] - '0'] != -1) return false;
                visited[board[i][j] - '0'] = 1;
            }
        }
        return true;
    }
    bool isValidSudoku(vector<vector<char>>& board) {
        for (int i = 0; i < 9; i++) {
            if (!checkcolumn(board, i) || !checkrow(board, i) || !checkminibox(board, i))
                return false;
        }

        return true;
    }
};
