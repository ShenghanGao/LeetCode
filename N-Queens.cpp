class Solution {
public:
	vector<vector<string>> solveNQueens(int n) {
		vector<vector<string>> res;
		int* rowNumberOfTheQueenInOneColumn = new int[n];
		
		solveBoard(rowNumberOfTheQueenInOneColumn, n, 0, res);
		
		return res;
	}

private:
	bool checkPosition(int rowNumberOfTheQueenInOneColumn[], int row, int col) {
		int i;
		for (i = 0; i < col; ++i) {
			if (rowNumberOfTheQueenInOneColumn[i] == row ||
				abs(rowNumberOfTheQueenInOneColumn[i] - row) == col - i)
				return false;
		}
		return true;
	}
	
	void solveBoard(int rowNumberOfTheQueenInOneColumn[], int n, int col, vector<vector<string>>& res) {
		int i, j;
		if (col == n) {
			vector<string> solution;
			for (i = 0; i < n; ++i) {
				string boardRow = "";
				for (j = 0; j < n; ++j) {
					if (i == rowNumberOfTheQueenInOneColumn[j])
						boardRow = boardRow + "Q";
					else
						boardRow = boardRow + ".";
				}
				solution.push_back(boardRow);
			}
			res.push_back(solution);
			return;
		}

		for (i = 0; i < n; ++i) {
			if (checkPosition(rowNumberOfTheQueenInOneColumn, i, col)) {
				rowNumberOfTheQueenInOneColumn[col] = i;
				solveBoard(rowNumberOfTheQueenInOneColumn, n, col + 1, res);
			}
		}
	}
};
