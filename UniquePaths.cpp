class Solution {
public:
	int uniquePaths(int m, int n) {
		int* dp = new int[n];
		for (int i = 0; i < n; ++i)
			dp[i] = 1;

		for (int i = 0; i < m - 1; ++i) {
			for (int j = 0; j < n - 1; ++j) {
				dp[j + 1] = dp[j] + dp[j + 1];
			}
		}
		return dp[n - 1];
	}
};
