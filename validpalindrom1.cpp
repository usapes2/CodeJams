#include<iostream>
#include<map>
#include<set>
#include<string>
#include<algorithm>
#include<vector>
#include<cctype>
#include<stdio.h>
#include<ctype.h>
#include<iterator>
using namespace std;

bool is_palindrome(const string& s,int counter = 0){
	int j = s.size()-1;
	if((s.size() == 0 or s.size() == 1 ) and counter < 2) return true;

	for (int i = 0 ; i < s.size() ; i++) {

		if((s[i] != s[j]) and counter < 1 ) {
		return  is_palindrome(s.substr(i + 1, j-i),1) or is_palindrome(s.substr(i,j-i),1) ; 
		}else if ((s[i] != s[j]) and counter >=1 ) {
		return false; }
		j--;
	}
return true;
}

int main(int argc, const char *argv[])
{
	
	cout <<is_palindrome("cba") <<endl;
	return 0;
}
