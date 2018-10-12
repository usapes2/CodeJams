#include<iostream>
#include<map>
#include<set>
#include<string>
#include<algorithm>
#include<vector>
#include<cctype>
#include<stdio.h>
#include<ctype.h>
using namespace std;

bool is_palindrome(const string& s){


	return equal(s.begin(),s.end(),s.rbegin());
}

string prepstring(const string& s) {
	string ss="";
	for (auto i : s) {
		if(isalpha(i) or isdigit(i)) {
			ss+=tolower(i);
		}
	}


	return ss;
}


int main(int argc, const char *argv[])
{
	
	cout <<is_palindrome(prepstring("A man, a plan, a canal: Panama")) <<endl;
	return 0;
}
