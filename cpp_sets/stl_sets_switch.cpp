#include<iostream>
#include<set>
using namespace std;
typedef set<int>::iterator si_itr;// set integer itr

int main () {
	set<int> s; // creates a set of intergers
	int t ;
	cin >> t;

	
	// getting the input 
	for ( int i = 0 ; i < t; i++ ){

		pair<int,int> p;
		cin >> p.first>>p.second;

		switch(p.first){
			case 1:
				s.insert(p.second);
				break;
			case 2: 
				if(s.find(p.second) != s.end()){
				s.erase(p.second);}
				break;
			case 3:
				if(s.find(p.second) != s.end()){
				cout << "Yes"<<endl;} else cout<<"No"<<endl; 
				break;
		}}
return 0;
}
