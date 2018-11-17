#include<iostream>
#include<map>
#include<set>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;

int fibo(int fib_cur, int fib_prev, int n) {
	if (n == 1) {
		return fib_cur;
	}
	else return fibo(fib_cur + fib_prev, fib_cur, n-1);
}

int fibo_wrapper(int n) {
	return fibo(1,0,n);
}

int main(int argc, const char *argv[])
{
	
	cout << fibo_wrapper(40);
	return 0;
}
