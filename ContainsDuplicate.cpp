class Solution {
public:
	bool containsDuplicate(vector<int>& nums) {
		set<int> s;
		for (int val : nums) {
			if (!s.insert(val).second)
				return true;
		}
		return false;
	}
};
