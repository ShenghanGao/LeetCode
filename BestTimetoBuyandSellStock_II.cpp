class Solution {
public:
	int maxProfit(vector<int>& prices) {
		int p = 0;
		for (int i = 1; i < prices.size(); ++i) {
			int delta = prices.at(i) - prices.at(i - 1);
			if (delta > 0)
				p += delta;
		}
		return p;
	}
};
