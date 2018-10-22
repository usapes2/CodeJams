#include<iostream>
#include<map>
#include<set>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;

int _search(vector<int>& nums, int target, int l, int r) {
		
		if (l < r){ 
		int mid = (r + l ) / 2 ; // calculating mid idx


		if ( nums[mid] == target ) return mid; // checking if we found it

		if ( nums[mid] < nums[r] ) { // regular not rotated case 
			
			if ( nums[mid] < target && target <= nums[r] ) {
				_search(nums, target, mid + 1, r);

			} else {
				_search(nums, target, l, mid - 1);
			}



		} else { // rotated case
			if (nums[l] <= target && target < nums[mid]) {
				_search(nums, target, l, mid - 1);
			} else {
				_search(nums, target, mid + 1, r);
			}


}

} else return -1 ;

}

int search(vector<int>& nums, int target) {
	int left = 0;
	int right = nums.size() - 1;

	return _search(nums, target, left, right);
}

int main(int argc, const char *argv[])
{
	vector<int> v = {1,2,3,4,5,6};
	cout << search(v, 6);
	return 0;
}
