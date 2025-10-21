class Solution {
public:
    bool exist(vector<vector<char>>& board, string word) {
        int x = board.size();
        int y = board[0].size();
        vector<vector<int>> vis(x, vector<int>(y, 0));
        vector<int> X = {1, 0, 0, -1};
        vector<int> Y = {0, -1, 1, 0};
        bool ans = false;

        for (int i = 0; i < x; i++) {
            for (int j = 0; j < y; j++) {
                if (board[i][j] == word[0]) {
                    vis[i][j] = 1;
                    solve(i, j, board, word, vis, 0, X, Y, ans);
                    vis[i][j] = 0;
                    if (ans) return true; // 找到就直接返回
                }
            }
        }
        return ans;
    }

    void solve(int x, int y, vector<vector<char>>& board, string& word,
               vector<vector<int>>& vis, int len, vector<int>& X, vector<int>& Y, bool& ans) {
        if (len == word.length() - 1) { // 已匹配到最后一个字符
            ans = true;
            return;
        }
        if (ans) return; // 提前剪枝

        for (int i = 0; i < 4; i++) {
            int nx = x + X[i];
            int ny = y + Y[i];
            if (nx >= 0 && nx < board.size() && ny >= 0 && ny < board[0].size() &&
                !vis[nx][ny] && board[nx][ny] == word[len + 1]) {
                vis[nx][ny] = 1;
                solve(nx, ny, board, word, vis, len + 1, X, Y, ans);
                vis[nx][ny] = 0;
            }
        }
    }
};
