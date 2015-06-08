class Solution {
public:
	bool isValid(string s) {
		map<char, char> hm;
		stack<char> st;
		hm.insert(make_pair('(', ')'));
		hm.insert(make_pair('{', '}'));
		hm.insert(make_pair('[', ']'));

		for (char c : s) {
			map<char, char>::iterator it = hm.find(c);
			if (it != hm.end())
				st.push(c);
			else {
				if (st.empty())
					return false;
				char st_top = st.top();
				st.pop();
				it = hm.find(st_top);
				if (it->second != c)
					return false;
			}
		}
		return st.empty();
	}
};
