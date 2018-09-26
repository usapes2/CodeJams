
#include<iostream>
#include<set>
using namespace std;

bool containsDuplicate(vector<int>& nums) {

	set<int> s; // creates a set of intergers

	for(int i = 0; i < nums.size() ; i++ ) {
		if (s.find(nums[i]) != s.end()) {
			s.insert(nums[i]);
		} else { return true; }
		
	return false;
			
}}

int main () {
	return 0;
}
