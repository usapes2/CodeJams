#include<iostream>
#include<map>
#include<set>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;

int trace_factorial(int n)
{
	for(int i=0; i<n; i++) cout << " ";
	cout << "n = " << n << endl;
	if(n==0){
		return 1;
		cout << "returning 1" << endl;
		}
	else{
		int r = n*trace_factorial(n-1);
		for(int i=0; i<n; i++) cout << " ";
		cout << "returning " << r << endl;
		return r;
		}
}


int main(int argc, const char *argv[])
{
int a = trace_factorial(5);	
	return 0;
}
