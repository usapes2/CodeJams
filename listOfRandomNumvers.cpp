/*
A recursive view of a nonempty list L:
L has a node as head and a list as tail.
A recursive algorithm to generate n numbers:
If n equals zero (or less) then
return an empty list;
else (n is larger than zero)
generate a list L of n-1 numbers;
push a random number to L
*/


#include<iostream>
#include<map>
#include<set>
#include<string>
#include<algorithm>
#include<vector>
#include<list>
#include<ctime>
#include<cstdlib>
using namespace std;

list<int> generate(int n){

	if(n == 0) {
		list<int> L = {};
		return L;
	}

	else{
		int r = rand() % 10;
		list<int> L = generate(n-1);
		L.push_back(r);
		return L;
	
	}
}
void write(list<int> L){
	if(!L.empty()){
		list<int> K = L;
		cout<<" "<< K.front();
		K.pop_front();
		write(K);
	}
}

void sum_list(list<int>& L, int & sum) {
	while(!L.empty()){
		sum+=L.front();
		L.pop_front();
		sum_list(L,sum);
	}
}
int sum_list(list<int> L){

	int sum = 0;
	sum_list(L,sum);
	return sum;

}

int sum_list2(list<int> L) {
	if(L.empty()) {
		int sum = 0;
		return sum;
	}
	else {
		int temp = L.front();
		L.pop_front();
		return temp + sum_list2(L);
	}
}


int main(int argc, const char *argv[])
{
	list<int> L = generate(2);
	write(L);
	cout << "\n";

	cout << "sum :" <<sum_list2(L);

	
	return 0;
}

