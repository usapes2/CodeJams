#include<vector>
#include<iostream>
#include<map>

using namespace std;
/*
vector<int> twoSum(vector<int>& nums, int target){
	vector<int> sol;
	int i = 0;
	int j = 0;
	
	for ( int i = 0; i< nums.size(); i++) {
		for ( int j = i ; j < nums.size();j++) {
			if ( nums[i] == target - nums[j])
			{
				sol.push_back(i);
				sol.push_back(j);
				return sol;
			}
	       	}
	
	} 
		sol.push_back(i);
		sol.push_back(j);
	return sol;
} */

typedef map<int,int>::iterator m_iter;

vector<int> twoSum(vector<int>& nums, int target){
	vector<int> sol;
	sol.push_back(0);
	sol.push_back(0);
    	map<int,int> m; // my storage

	for( int i = 0 ; i < nums.size() ; i ++ ) 
	{
		int n = nums[i];
		m_iter itr = m.find(n);
		if(itr == m.end()) { // not there add it
			m.insert(make_pair(target-n,i));
		} else
	       	{
		       sol.clear(); 
		 	 sol.push_back(itr->second);
		 	 sol.push_back(i);
		
		}
		
		} 

	return sol;
	}


int main() {
	vector<int> v;
	v.push_back(5);
	v.push_back(2);
	v.push_back(4);
	v.push_back(9);
	vector<int> sol = twoSum(v,9);
	cout<<sol[0]<<" " <<sol[1]<<endl;
	

	return 0;
}
