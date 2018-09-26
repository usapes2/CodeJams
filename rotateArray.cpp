#include<iostream>
#include<vector>
using namespace std;


void pr(vector<int> v) {
	cout << "integer vector print " <<endl;
	for (int i = 0 ; i < v.size(); i++)
		cout << v[i]<<endl;
}


void rotate(vector<int>& nums,int k) {

	for(int i = 0 ; i<k;i++){

		int temp = *(nums.end()-1); 
		nums.erase(nums.end()-1);
		nums.insert(nums.begin(),temp);

	}
}
int main() {

	vector<int> v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	v.push_back(4);
	pr(v);
	rotate(v,2);
	pr(v);
		
	return 0;

}
