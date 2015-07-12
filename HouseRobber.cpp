class Solution {
public:
	int rob(vector<int>& nums) {
		int n = nums.size();
		if (n == 0)
			return 0;

		int* dp = new int[n + 1];
		dp[0] = 0;
		dp[1] = nums.at(0);

		for (int i = 2; i < n + 1; ++i)
			dp[i] = max(dp[i - 2] + nums.at(i - 1), dp[i - 1]);

		return dp[n];
	}
};
