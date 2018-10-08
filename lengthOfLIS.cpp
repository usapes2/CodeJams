#include<iostream>
#include<map>
#include<set>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
int lengthOfLIS(vector<int>& nums) {

	vector<int> dp(nums.size(),1);
	int max = 1;
	
	for (int i = 1; i < nums.size(); i++) {

		for (int j = i-1; j>=0; j--) {
			if (nums[j] < nums[i]) {
				if (dp[j]+1 > dp[i]) {
					if (dp[j]+1 > max) max = dp[j] +1;
					dp[i] = dp[j]+1;
				}
			}
		}
	}


	return max;
}
int main(int argc, const char *argv[])
{
	return 0;
}
