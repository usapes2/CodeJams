#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int rob(vector<int>& nums) {
	if(nums.size() == 0) return 0;

	int i = 0;
	vector<int> mx;

	for (i = 0; i < nums.size(); i++) {
		/* code */
		if( i == 0 ){ mx.push_back(nums[0]) ; continue;}
		if( i == 1 ){ mx.push_back(max(nums[0], nums[1])); continue; }

		mx.push_back( max(nums[i] + mx[i-2], mx[i-1]) );

	}

	 return mx[nums.size() - 1];
}

int main(int argc, const char *argv[])
{
	
	vector<int> v;

	int mx = rob(v);
	cout << mx <<endl;

	

	
	return 0;
}
