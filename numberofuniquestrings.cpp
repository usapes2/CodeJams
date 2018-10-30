#include<iostream>
#include<map>
#include<set>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;

int main(int argc, const char *argv[])
{
	
	std::set<string> unique;
	int n = 0;
	cin >> n;
	string s;

	for (int i = 0; i < n; i++) {
		cin>>s;
		unique.insert(s);
	}
	
	cout << unique.size();
	return 0;
}
