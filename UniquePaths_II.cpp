class Solution {
public:
	int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
		int row = obstacleGrid.size();
		int col = obstacleGrid.at(0).size();

		int* dp = new int[col];
		dp[0] = 1;
		for (int i = 1; i < col; ++i)
			dp[i] = 0;

		for (int i = 0; i < row; ++i) {
			for (int j = 0; j < col; ++j) {
				if (obstacleGrid.at(i).at(j) == 1)
					dp[j] = 0;
				else if (j > 0)
					dp[j] = dp[j - 1] + dp[j];
			}
		}
		return dp[col - 1];
	}
};
