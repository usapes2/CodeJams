#include<iostream>
#include<map>
#include<set>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
void PrintMap(const map<int,string>& m) {
	cout << "Size = " << m.size() << endl;
	for (auto item : m) {
		cout << item.first << ": " << item.second << endl;
	}
}

void PrintMapReverse(const map<string,int>& m) {
	cout << "Size = " << m.size() << endl;
	for (auto item : m) {
		cout << item.first << ": " << item.second << endl;
	}
}

map<string,int> ReverseMap ( const map<int,string>& m) {
	map<string,int> result;
	for (auto item : m) {
		result[item.second]=item.first;
	}
	return result;
}

int main(int argc, const char *argv[])
{
	/*
	map<int,int> m;
	int i;

	while(cin>>i)
		++m[i];

	for (auto itr : m) {
		cout << itr.first<<" | " <<itr.second <<endl;
	}

	for (map<int,int>::const_iterator itr = m.begin(); itr != m.end(); itr++ ) {
		cout << itr->first<<" | " <<itr->second <<endl;
	}
	*/
	std::map<int, string> events;
	events[1987] ="Uladzimir Sapeshka birthday";
	events[1989] ="Alena Prashkovich birthday";
	events[1917] ="Revolution";
	PrintMap(events);
	events.erase(1917);
	PrintMap(events);

	PrintMapReverse(ReverseMap(events));




	return 0;
}
