class Solution {
public:
	bool exist(vector<vector<char>>& board, string word) {
		int row = board.size();
		int col = board.at(0).size();

		bool flag = false;
		for (int i = 0; i < row; ++i) {
			for (int j = 0; j < col; ++j) {
				backtrack(board, row, col, word, i, j, 0, flag);
				if (flag)
					return true;
			}
		}
		return false;
	}

private:
	void backtrack(vector<vector<char>>& board, int& row, int& col, string& word, int i, int j, int k, bool& flag) {
		char& c = board.at(i).at(j);
		if (k == word.size() - 1 && c == word.at(k))
			flag = true;

		if (flag || c != word.at(k))
			return;

		char tmp = c;
		c = '$';
		if (i - 1 >= 0)
			backtrack(board, row, col, word, i - 1, j, k + 1, flag);
		if (i + 1 < row)
			backtrack(board, row, col, word, i + 1, j, k + 1, flag);
		if (j - 1 >= 0)
			backtrack(board, row, col, word, i, j - 1, k + 1, flag);
		if (j + 1 < col)
			backtrack(board, row, col, word, i, j + 1, k + 1, flag);
		c = tmp;
	}
};
