#include<iostream>
#include<map>
#include<set>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
int main(int argc, const char *argv[])
{
	vector<int> v = {1,2,3,4,5,7,10,20};
	vector<int>::iterator itr = upper_bound(v.begin(),v.end(),5);

	cout << *itr <<endl;
	return 0;
}

/*
 auto it = upper_bound( arr.begin(),arr.end(), target);
 return it == arr.end() ? arr[0] : *it;

 */
