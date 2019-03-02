#include<iostream>
#include<map>
#include<set>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;

bool validMountainArray(vector<int> A) {
	int n = A.size();

	if( n < 3 ) return false;

	if (n == 3) {
		if (A[0] < A[1] and A[1] > A[2]) {
			return true;		
		} else return false;
	}

	int i = 1;	

	while(i <= n and A[i] > A[i-1] ){
		if( i != n) i++;
		else break;
	}

	if ( i == 1 or i == n ) return false;

	while(i <= n  and A[i] < A[i-1] ){
		if ( i!=n ) i++;
		else break;
	}
	if ( i == n  ) return true;
	else return false;

}

/*
 int n = A.size(), i = 0, j = n - 1;
 while(i + 1 < n && A[i] < A[i+1]) i++;
 while(j > 0 && A[j - 1] > A[j]) j--;
 return i > 0 && i == j && j < n - 1;
   */

bool validM(vector<int>& A) {

}

int main(int argc, const char *argv[])
{
	cout << validMountainArray({9,8,7,6,5,4,3,2,1});

	return 0;
}
