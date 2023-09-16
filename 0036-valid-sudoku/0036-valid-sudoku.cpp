class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<unsigned int> rows(9, 0);
        vector<unsigned int> columns(9, 0);
        vector<unsigned int> cells(9, 0);
        for (int r = 0; r < board.size(); r++) {
            for (int c = 0; c < board[0].size(); c++) {
                if (board[r][c] == '.') {
                    continue;
                }
                int num = board[r][c] - '0';
                int offset = 1 << num;
                if ((rows[r] & offset) > 0) {
                    return false;
                }
                if ((columns[c] & offset) > 0) {
                    return false;
                }
                int cellIndex = (r / 3) * 3 + c / 3;
                if ((cells[cellIndex] & offset) > 0) {
                    return false;
                }
                rows[r] |= offset;
                columns[c] |= offset;
                cells[cellIndex] |= offset;
            }
        }
        return true;
    }
};