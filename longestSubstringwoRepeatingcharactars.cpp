/* Given a string, find the length of the longest substring 
 * without repeating characters */

#include<iostream>
#include<vector>
#include<string>
#include<set>

using namespace std;

int lengthOfLongestSubstring(string s){
	if (s.size() == 0) return 0;
	if (s.size() == 1) return 1;
	if (s.size() == 2) return s[0]!=s[1] ? 2:1;
	int i = 0;
	int j = 1;
	int curMax = 0;

	while (s.size() - i > curMax and i < s.size()) {
		set<int> m;
		m.insert(s[i]);

		while( j < s.size() and m.find(s[j])==m.end() ){
			m.insert(s[j]);
			j++;	
		}
		
		if( m.size() > curMax) {
			curMax = m.size();
		}
		i = i + 1;
		j = i + 1;

	}

return  curMax;
}

int main(int argc, const char *argv[])
{
	
	return 0;
}
