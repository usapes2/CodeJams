class Solution {
public:
	bool isValid(string s) {
		if (s.size() == 0) return true;
		if (s.size() == 1) return false;

		stack<char, string> st;

		for (int i = 0; i < s.size(); i++) {
			if (  ((int) s[i] ) == ((int) st.top()) + 1  or ((int) s[i] ) == ((int) st.top()) + 2) { st.pop(); } else st.push(s[i]);

		}

		return st.size() == 0;
	}
};