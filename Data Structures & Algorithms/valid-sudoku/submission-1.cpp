class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
         ios::sync_with_stdio(false);
        cin.tie(nullptr);
        set<char> rows[9], cols[9], boxes[9];

    for (int i = 0; i < 9; ++i) {
        for (int j = 0; j < 9; ++j) {
            char c = board[i][j];
            if (c == '.') continue;

            if (rows[i].contains(c)) return false;
            rows[i].insert(c);

            if (cols[j].contains(c)) return false;
            cols[j].insert(c);

            int idx = (i / 3) * 3 + (j / 3);
            if (boxes[idx].contains(c)) return false;
            boxes[idx].insert(c);
        }
    }
    return true;
    }
};