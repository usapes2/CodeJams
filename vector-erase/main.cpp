
#include"helper.h"

typedef std::vector<int>::size_type vi_sz;
using namespace std;


int main () {
	vi v;	
	vs s;
	int t;
	cin >> t; // read t. cin knows 
	for ( int i = 0; i < t ; ++i) {
		int temp;
		cin >> temp;
		v.push_back(temp);
	}
	int t1,t2,t3;
	cin >> t1;
	cin>>t2;
	cin>>t3;

	v.erase(v.begin()+t1-1);
	v.erase(v.begin()+t2-1,v.begin()+t3-1);
pr(v);	

	return 0;

}

