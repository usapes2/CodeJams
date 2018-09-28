#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int rob(vector<int>& nums) {

	int mx = 0;

	if (nums.size() == 0) {
		mx += 0;
		return 0;
	}
	if (nums.size() == 1) {
		mx += 1;
		return nums[0];
	}

	vector<int> v(nums.begin(),nums.end()-2);
	vector<int> l(nums.begin(),nums.end()-1);

         mx += max(rob(v) + nums[nums.size()-1] , rob(l));
	 return mx;
}

int main(int argc, const char *argv[])
{
	
	vector<int> v;
	v.push_back(2);
	v.push_back(7);
	v.push_back(9);
	v.push_back(3);
	v.push_back(1);
	v.push_back(1);

	int mx = rob(v);
	cout << mx <<endl;

	
	return 0;
}
