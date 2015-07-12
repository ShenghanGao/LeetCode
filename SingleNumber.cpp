class Solution {
public:
	int singleNumber(vector<int>& nums) {
		int a = nums.at(0);
		for (int i = 1; i < nums.size(); ++i)
			a ^= nums.at(i);
		return a;
	}
};
