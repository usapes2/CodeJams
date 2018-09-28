#include<iostream>
#include<string>
#include<vector>

using namespace std;

int strStr(string haystack, string needle){

	int i = 0;
	int n = haystack.size();
	if(needle.size() == 0) { return 0;}

	for (i = 0; i < n; i++) {

		if( n-i < needle.size()) break;

		int j = 0;
		while (i < n and j < needle.size() and haystack[i+j] == needle[j]) {
			/* code */
			j++;
		}

		if(j == needle.size()) return i;
	}
	return -1;

}
int main(int argc, const char *argv[])
{
	
	return 0;
}
