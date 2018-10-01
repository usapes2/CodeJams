#include<iostream>
#include<vector>
#include<map>
using namespace std;
typedef map<int,int>::iterator m_iter;

int majorityElement(vector<int>& nums) {

        pair<int,int> p;
	std::map<int, int> m;
        m_iter itr;

	for (int i = 0; i < nums.size(); i++) {

		int key = nums[i];	

        	itr = m.find(key);

                if(itr != m.end()) {m[key] += 1;
		} else {
			m.insert(make_pair(key,1)); }
	 }
	int counter = 0;
	int val = 0;
	for (itr = m.begin(); itr != m.end(); itr++) {
		if(counter < itr->second) { 
	       	counter = itr->second; 
		 val = itr->first;} else continue;
		
	}

	return val;

}
int main(int argc, const char *argv[])
{
	
	return 0;
}
