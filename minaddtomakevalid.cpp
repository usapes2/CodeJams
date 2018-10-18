#include<iostream>
#include<map>
#include<set>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
int minAddToMakeValid(string S ) {
	int count = 0;
	vector<int> to_sum;
	
	for (char i : S) {
		if(count >= 0 ) {
		if(i == '(' ) count +=1;
		if(i == ')' ) count -=1; 
		}

		if(count < 0 and i == ')')
			count -=1; 

		else if(count < 0 and i == '(' ) {
			to_sum.push_back(abs(count));
			count = 1;
		}
			
	}
	for (auto i : to_sum) {
		count +=i;
	}

	return to_sum.size() + count ; 
}
int main(int argc, const char *argv[])
{
	
	string s = ")(";
	cout << minAddToMakeValid(s) <<endl;

	return 0;
}
