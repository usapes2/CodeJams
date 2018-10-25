#include<iostream>
#include<map>
#include<set>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;

vector<int> maxSlidingWindow(vector<int>& nums, int k) {
	
	vector<int> ret;

	vector<int> window(nums.begin(),nums.begin()+k);

	make_heap(begin(window),end(window));

	ret.push_back(window.front());

	for (int i = k; i < nums.size(); i++) {

		window[0] = nums[i];	

		push_heap(begin(window),end(window));

		ret.push_back(window.front());
	}

	return ret;
        
} 


int main(int argc, const char *argv[])
{
	vector<int> nums = { 1,3,-1,-3,5,3,6,7 };
	int k = 3;
	vector<int> v(nums.begin(),nums.begin()+k);

	make_heap(begin(v),end(v));
	
	cout << v.front() <<endl;
	v.push_back(10);
	push_heap(begin(v),end(v));
	cout << v.front() <<endl;
	cout << v[4] <<endl;

	return 0;
}
