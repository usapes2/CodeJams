#include<iostream>
#include<map>
#include<set>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;

class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        make_heap(nums.begin(),nums.end());
        for(int i = 0 ; i < k-1; i++ ){
            pop_heap(nums.begin(),nums.end());
            nums.pop_back();
        }
        return nums.front();
        
    }
};


