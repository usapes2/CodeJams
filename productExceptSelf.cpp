#include<iostream>
#include<map>
#include<set>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
vector<int> productExceptSelf(vector<int>& nums){
	int size = nums.size();
	vector<int> res(size,1);

	for (int i = 1; i < size; i++) {
		res[i] = res[i-1]*nums[i-1];

	}

	int temp = nums[size -1 ];

	for ( int i = size - 2; i>-1; i-- ){
		res[i] = res[i]*temp;
		temp = temp * nums[i];
	}

	return res;

}
int main(int argc, const char *argv[])
{
	
	vector<int> v = {1,2,3};
	vector<int> t(productExceptSelf(v)); 
	for (auto i : t) {
		cout << i<<endl;
	}
	return 0;
}
