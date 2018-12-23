#include<iostream>
#include<map>
#include<set>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;

int repeatedNtimes(vector<int>& A){
	int size = A.size();
	std::map<int, int> m;
	for (int i = 0; i < size; i++)  { 
		m[A[i]]++;
		if(m.size() - 1 != i) {return A[i];}
		else continue;
	}
		return -1;
}


int main(int argc, const char *argv[])
{
	vector<int> vi = { 0,4,3,2,5,6};
	cout << repeatedNtimes(vi);
	return 0;
}
