#include<iostream>
#include<map>
#include<set>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;

// return true if A and B are connected, else return false
bool find( vector<int> Arr, int a, int b) {
	if( Arr[a] == Arr[b] ){
		return true;
	} else {
		return false;
	}
}

// change all entries from Arr[ A ] to Arr [ B ]
void union_f( vector<int>& Arr, int A, int B ) {
	int TEMP = Arr[A];

	for (int i = 0; i < Arr.size(); i++) {
		if (Arr[ i ] == TEMP) {
			Arr[i] = Arr[B];
		}
	}

}

int findcircleNum(vector<vector<int>>& M) {
	vector<int> v(M.size());
	for (int i = 0; i < M.size(); i++) {
		v[i] = i;
		
	}
	std::map<int,int> diff;

	for (int i = 0; i < M.size(); i++) {
		for (int j = 0; i < M.size(); i++) {

			if(!find(v,i,j) and M[i][j] == 1 ) {
				union_f(v,i,j);
			}	
		}
	}

	for (auto i : v) {
		++diff[i];
	}
	


	return diff.size();
}
int main(int argc, const char *argv[])
{
	vector<vector<int>> v = {{1,0,0,1},{0,1,1,0},{0,1,1,0},{1,0,1,1}}	;
	int a = findcircleNum(v);
	cout << a <<endl;

	return 0;
}
