#include<iostream>
#include<map>
#include<set>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;

set<string> BuildMapValuesSet(const map<int, string>& m) {
  // ...
  	std::set<string> ret;
	for (auto i : m) {
		ret.insert(i.second);
	}
	return ret;
}

int main(int argc, const char *argv[])
{
set<string> values = BuildMapValuesSet({
    {1, "odd"},
    {2, "even"},
    {3, "odd"},
    {4, "even"},
    {5, "odd"}
});

for (const string& value : values) {
  cout << value << endl;
}	
	return 0;
}
