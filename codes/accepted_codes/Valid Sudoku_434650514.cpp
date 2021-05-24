class Solution {
  map<char, int> rows[10];
  map<char, int> cols[10];
  map<char, int> blocks[10];

 public:
  bool isValidSudoku(vector<vector<char>>& board) {
    for (int y = 0; y < 9; y++) {
      for (int x = 0; x < 9; x++) {
        char ch = board[y][x];

        if (ch != '.') {
          int block_id = (y / 3) * 3 + x / 3;

          rows[y][ch]++;
          cols[x][ch]++;
          blocks[block_id][ch]++;

          if (rows[y][ch] >= 2 || cols[x][ch] >= 2 ||
              blocks[block_id][ch] >= 2) {
            return false;
          }
        }
      }
    }
    return true;
  }
};
