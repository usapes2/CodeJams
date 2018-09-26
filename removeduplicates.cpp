#include<iostream>
#include<vector>
using namespace std;

int removeDuplicates(vector<int>& nums) {
	if(nums.size() == 0) { return 0;}

	vector<int>::iterator i;
	vector<int>::iterator j;
	i = nums.begin();
	j = i;

	while (j < nums.end()) {
		
		while ( j < nums.end() && *(i) == *(j)) {
			j++;
		}
		
		if (j < nums.end() && *(i)!=*(j)) {
			/* code */
			*(i+1) = *(j);
			i++;
		}

		j++;
		
	}
	return (i - nums.begin()+1);

}

int main(int argc, const char *argv[])
{
	vector<int> v;
	v.push_back(0);
	v.push_back(0);
	v.push_back(0);
	v.push_back(0);
	v.push_back(0);
	v.push_back(0);
	v.push_back(0);
	cout << removeDuplicates(v)<<endl;

	
	return 0;
}
