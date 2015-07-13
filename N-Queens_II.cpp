class Solution {
public:
	int totalNQueens(int n) {
		int res = 0;
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

	void solveBoard(int rowNumberOfTheQueenInOneColumn[], int n, int col, int& res) {
		if (col == n) {
			++res;
			return;
		}
		
		int i;
		for (i = 0; i < n; ++i) {
			if (checkPosition(rowNumberOfTheQueenInOneColumn, i, col)) {
				rowNumberOfTheQueenInOneColumn[col] = i;
				solveBoard(rowNumberOfTheQueenInOneColumn, n, col + 1, res);
			}
		}
	}
};
