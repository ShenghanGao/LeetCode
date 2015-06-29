class Solution {
public:
	int maxProfit(vector<int>& prices) {
		int len = prices.size();
		if (len <= 1)
			return 0;

		vector<int> maxProfitFromLeft, maxProfitFromRight;

		int minFromLeft = prices.at(0);
		maxProfitFromLeft.insert(maxProfitFromLeft.begin(), 0);
		for (int i = 1; i < len; ++i) {
			int maxProfitEndingHereFromLeft = prices.at(i) - minFromLeft;
			maxProfitFromLeft.insert(maxProfitFromLeft.begin() + i, max(maxProfitFromLeft.at(i - 1), maxProfitEndingHereFromLeft));
			minFromLeft = min(minFromLeft, prices.at(i));
		}

		int maxFromRight = prices.at(len - 1);
		maxProfitFromRight.insert(maxProfitFromRight.begin(), 0);
		for (int i = len - 2; i >= 0; --i) {
			int maxProfitEndingHereFromRight = maxFromRight - prices.at(i);
			maxProfitFromRight.insert(maxProfitFromRight.begin(), max(maxProfitFromRight.at(0), maxProfitEndingHereFromRight));
			maxFromRight = max(maxFromRight, prices.at(i));
		}

		int maxProfit = 0;
		for (int i = 0; i < len; ++i)
			maxProfit = max(maxProfit, maxProfitFromLeft.at(i) + maxProfitFromRight.at(i));

		return maxProfit;
	}
};
