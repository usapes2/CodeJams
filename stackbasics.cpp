#include<iostream>
#include<stack>
#include<string>
#include<list>
#include<vector>
using namespace std;

int main(int argc, const char *argv[])
{
	vector<int> v1 = { 1,5,2,3};
	stack<int, vector<int>> st(v1);
	stack<int> st1;
	string ss("Hello");
	//stack<string, string> st(ss);

	cout << st.size() << endl;
	cout << st1.size() <<endl;

	while(!st.empty()) {
		cout << st.top() << " ";
		st.pop();
	}

	cout << (int) '(' <<endl;
	
	return 0;
}
