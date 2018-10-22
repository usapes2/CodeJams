#include<iostream>
#include<map>
#include<set>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
bool isAlpha(char x) {
	return isalpha(x);
}
void swap(char& x, char& y) {
	int k = x;
	x = y;
	y = k;
}

string reverseOnlyLetters( string S) {
	int i = 0;
	int j = S.size() - 1;

	while ( i < j ) {
		while ( i < j && !isalpha(S[i])) i = i + 1;

		while ( j > i && !isalpha(S[j])) j = j - 1;

		if ( i < j) { swap( S[i], S[j] ) ; i++, j--; }

	}

	return S;

}

int main(int argc, const char *argv[])
{

	string s("xxxywr-234-234809234aaaaa");
	cout << reverseOnlyLetters(s);
	return 0;
}
