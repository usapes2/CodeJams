#include<iostream>
#include<map>
#include<set>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;

// Complete the cutTheSticks function below.
vector<int> cutTheSticks(vector<int> arr) {
	int n = 0;
	cin >> n;
	if (arr.size() == 0) {
		return {};
	}
	if (arr.size() == 1) {
		return {1};
	}


	sort(begin(arr),end(arr));
	vector<int> ret;

	// 2 2 4 4 5 8 
	// 0 1 2 3 4 5
	ret.push_back(arr.size());
	int i = 1;
	int size = arr.size();
	while ( i < size ) {
		while ( i < size and arr[i-1] == arr[i])
			i++;	
		if ( i != size) ret.push_back(size - i); 
		i++;
	}
	
	return ret;

}

int main(int argc, const char *argv[])
{
	
	vector<int> ret = cutTheSticks({1,1,1,1,1,1,1,1,2,2});
	for (auto i : ret) {
		cout << i << endl;
	}
	return 0;
}
