class Solution {
public:
	int maxProfit(vector<int>& prices) {
		if (prices.size() <= 1)
			return 0;

		int maxProfitSoFar = 0;
		int minSoFar = INT_MAX;

		for (int i : prices) {
			int maxProfitEndingHere = i - minSoFar;
			maxProfitSoFar = max(maxProfitSoFar, maxProfitEndingHere);
			minSoFar = min(minSoFar, i);
		}

		return maxProfitSoFar;
	}
};
