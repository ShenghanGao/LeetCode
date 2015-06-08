public class Solution {
	public boolean isValid(String s) {
		HashMap<Character, Character> hm = new HashMap<>();
		Stack<Character> st = new Stack<>();
		hm.put('(', ')');
		hm.put('{', '}');
		hm.put('[', ']');

		char[] ch = s.toCharArray();

		for (char c : ch) {
			if (hm.containsKey(c))
				st.push(c);
			else if (hm.containsValue(c)) {
				if (st.empty() || hm.get(st.pop()) != c)
					return false;
			}
			else
				return false;
		}
		return st.empty();
	}
}
