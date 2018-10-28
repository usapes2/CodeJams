/*
Given an array nums, there is a sliding window of size k which is moving from the very left of the array to the very right. You can only see the k numbers in the window. Each time the sliding window moves right by one position. Return the max sliding window.
*/

#include<iostream>
#include<map>
#include<set>
#include<string>
#include<algorithm>
#include<vector>
#include<deque>

using namespace std;

vector<int> maxSlidingWindow(vector<int>& nums, int k) {

	vector<int> ret;
	deque<int> deck;

	int i = 0;
	for (i; i < nums.size(); i++) {
		while (!deck.empty() && deck.back() < nums[i]) {	deck.pop_back(); }
		deck.push_back(nums[i]);

		if (i >= k - 1 ) {

			ret.push_back(deck.front());

			if (nums[i - k + 1] == deck.front())  {
				deck.pop_front();
			}
		}

	}
	return ret;

}


int main(int argc, const char *argv[])
{
	vector<int> nums = {1, 3, -1, -3, 5, 3, 6, 7};

	vector<int> ret = maxSlidingWindow(nums, 3) ;
	for (auto i : ret) {
		cout << i << endl;
	}
	return 0;
}
