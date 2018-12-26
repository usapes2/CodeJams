#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(int argc, const char *argv[])
{
	vector<int> v1 = { 1,2,3,4,5,6,7,0};
	make_heap(v1.begin(), v1.end());

	int n ;
	cin >> n;

	for (int i = 0; i < n; i++) {
		
	pop_heap(v1.begin(),v1.end());
	v1.pop_back();	

	}

	cout << v1.front() <<endl;

	return 0;

}
