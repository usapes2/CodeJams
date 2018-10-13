#include<iostream>
#include<map>
#include<set>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;

bool compare( pair<int,int> p1,pair<int,int> p2 ) {

	return p1.first > p2.first;
}

vector<int> topKFrequent(vector<int>& nums,int k){
	
	map<int,int> m; // key -> element | value -> # repetitions

	for (auto i : nums) {
		++m[i];
	}

	vector<pair<int,int> > vp; // < repetitions, value >

	for (auto i : m) {

		vp.push_back( make_pair(i.second,i.first) );
	}

	sort(vp.begin(),vp.end(),compare);

	vector<int> res(k,0);	

	for (int i = 0; i < k; i++) {
		res[i] = vp[i].second ;
	}

	return res;
}


/*
	map<int,int> rm;

	for (auto i : m) {
		
	}

        make_heap(nums.begin(),nums.end());

        for(int i = 0 ; i < k-1; i++ ){
            pop_heap(nums.begin(),nums.end());
            nums.pop_back();
        }
	
	return nums;
}
*/

int main(int argc, const char *argv[])
{

	vector<int> v = {1};
	vector<int> res = topKFrequent(v,1);

	for (auto i : res) {
		cout << i << endl;
	}
	
	return 0;
}

/*
	for (auto itr : m) {
		cout << itr.first<<" | " <<itr.second <<endl;
	}

	for (map<int,int>::const_iterator itr = m.begin(); itr != m.end(); itr++ ) {
		cout << itr->first<<" | " <<itr->second <<endl;
	}

    int findKthLargest(vector<int>& nums, int k) {
        make_heap(nums.begin(),nums.end());
        return nums.front();
        
    } */
