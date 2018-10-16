#include<iostream>
#include<map>
#include<set>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
/*
bool isSubsequence(string s, string t) {
	if (s.size() < t.size() ) return false;
	if( s.size() >= 0 and t.size() == 0 ) return true;
	if( s.size() == 0 and t.size() != 0 ) return false;
	if ( s[0] != t[0] ) return isSubsequence(s.substr(1,s.size()-1),t);
	if ( s[0] == t[0] ) return isSubsequence(s.substr(1,s.size()-1),t.substr(1,t.size()-1));
	
}

bool isSubsequence(string s, string t) { // s is the subseq, t is the string 
	if (t.size() < s.size() ) return false;
	if( t.size() >= 0 and s.size() == 0 ) return true;
	if( t.size() == 0 and s.size() != 0 ) return false;
	if ( t[0] != s[0] ) return isSubsequence(s,t.substr(1,t.size()-1));
	if ( s[0] == t[0] ) return isSubsequence(s.substr(1,s.size()-1),t.substr(1,t.size()-1));
	
}
*/
bool _isSubsequence(string& s, string& t,int s_idx,int t_idx) { // s is the subseq, t is the string 
	
	if( t_idx <= t.size() and s_idx == s.size()) return true;
	if( t_idx == t.size() and s_idx != s.size()) return false;

	if (  s_idx < s.size() and t_idx < t.size()  and s[s_idx] != t[t_idx] ) return _isSubsequence(s,t,s_idx,t_idx+1);
	if (  s_idx < s.size() and t_idx < t.size()  and s[s_idx] == t[t_idx] ) return _isSubsequence(s,t,s_idx+1,t_idx+1);
	
}

bool isSubsequence(string& s, string& t) { // s is the subseq, t is the string i
	 return _isSubsequence(s,t, 0,0) ;
	
}
int main(int argc, const char *argv[])
{
	string t("helloworld");
	string s("hd");
	cout << isSubsequence(s,t) <<endl; 
	return 0;
}
