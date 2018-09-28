#include<map>
#include<set>
#include<iostream>
#include<string>
#include<vector>

using namespace std;

int strStr(string haystack, string needle){

	int i = 0;
	int n = haystack.size();
	int m = needle.size();
	if(needle.size() == 0) { return 0;}

	std::set<string> mySet;
	mySet.insert(needle);
//	string::iterator itr1=haystack.begin();
	//string::iterator itr2=itr1 + needle.size();
	
	for (i = 0; i < n - m; i++) {
		string temp = haystack.substr(i,m);

		if (mySet.find(temp) != mySet.end()) {
			mySet.insert(temp);
			} else return i;
		
	}
	return -1;

}
int main(int argc, const char *argv[])
{
	
	return 0;
}
