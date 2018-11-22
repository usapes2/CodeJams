#include<iostream>
#include<map>
#include<set>
#include<string>
#include<algorithm>
#include<vector>
#include<stack>
using namespace std;
void write (stack<int> s) 
{
	if(s.empty()) cout<<" ";
	else 
	for(s; !s.empty(); s.pop())
		cout << " "<< s.top();
}
void write(stack<int> a, stack<int> b, stack<int> c) {
	cout << " A : "; write(a);
	cout << " B : "; write(b);
	cout << " C : "; write(c); cout << "\n" ;
}

void hanoi(int n, stack<int>& A, stack<int>& B, stack<int>& C)
{
	if(n == 1) {
		B.push(A.top()); 
		A.pop(); 
		write(A,B,C);
	}else {
		// move n-1 disks from A to C, B is auxiliary
		hanoi(n-1,A,C,B);
		// move nth disk from A to B
		B.push(A.top());
	       	A.pop();
		write(A,B,C);
		// move n-1 disks from C to B, A is auxiliary
		hanoi(n-1,C,B,A);
	}
}

int main(int argc, const char *argv[])
{
	
	cout << "give number of disks : ";
	int n; cin >> n;

	stack<int> A;

	for (int i = 0; i < n; i++) {
		A.push(n-i);
	}

	cout << "stack A : "; write(A);
	cout <<"\n";

	stack<int> B,C;
	hanoi(n,A,B,C);
	write(A,B,C);

	return 0;
}
