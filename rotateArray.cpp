#include<iostream>
#include<vector>
using namespace std;


void pr(vector<int> v) {
	cout << "integer vector print " <<endl;
	for (int i = 0 ; i < v.size(); i++)
		cout << v[i]<<endl;
}

/*
void rotate(vector<int>& nums,int k) {

	for(int i = 0 ; i<k;i++){

		int temp = *(nums.end()-1); 
		nums.erase(nums.end()-1);
		nums.insert(nums.begin(),temp);

	}
}*/

int gcd(int a, int b) {
	if ( b == 0)
		return a;
	else 
		return gcd(b,a%b);
}

void rotate(vector<int>& nums,int k) {
	
	int n = nums.size(), lim = gcd(n,k), d = - 1, temp, j, i;
	for (i; i < lim; i++) {

		j = i;
		temp = nums[i];

		while(1){
		d = (j+k) % n; 	
		if( d == i ) 
			break;

		nums[j] = nums[d];
		j = d;
		}
		nums[j] = temp;
	}
}
int main() {

	vector<int> v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	v.push_back(4);
	v.push_back(5);
	v.push_back(6);
	v.push_back(7);
	v.push_back(8);
	pr(v);
	cout << " \n Rotate \n";
	rotate(v,3);
	pr(v);

		
	return 0;

}
