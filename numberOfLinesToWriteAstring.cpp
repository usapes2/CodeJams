#include<iostream>
#include<map>
#include<set>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
vector<int> numberOfLines(vector<int>& width, string S) {
	const int a = (int) 'a';
	vector<int> v(2,0);
	if( S.size() == 0 ) return v;


	int n_lines = 1 ; // Total number of symbols needed
	int temp_count = 0;

	for (char i : S) {
		int cur = ((int) i ) - a ;
		if ( width[cur] + temp_count > 100 ){
			n_lines+=1;
			temp_count = width[cur];
		} else {
			
			temp_count += width[cur];
		}
		
	}

	v[0] = n_lines;
	v[1] = temp_count;

	return v;

}

int main(int argc, const char *argv[])
{
	
	vector<int> v(26,10);

	string s("abcdefghijklmnopqrstuvwxyz");

	vector<int> ret = numberOfLines(v,s);
//	const int a = (int) 'a';
	cout << "[" << ret[0] << "," << ret[1]<<"]" << endl;

	return 0;
}
