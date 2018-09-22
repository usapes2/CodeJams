
#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main () {
	vector<string> numbers; // this is the input
	vector<string> output; // this is my output
	int t;
	cin >> t; // read t. cin knows 
	for ( int i = 0; i < t ; ++i) {
		string temp;
		cin >> temp;
		numbers.push_back(temp);
	}

	// working with the input 
	
	typedef vector<string>::size_type vec_sz;
	
	for ( vec_sz i = 0 ; i < numbers.size() ; i++ ) { // going through input number
		string s = numbers[i];
		string::size_type L = s.size();
		//	cout << L << endl;	
		for ( string::size_type j = L ; j != 0 ; j--) 
		{ 
			if ( s[j-1] >= s[j-2] ) { 
				continue ;
			} else {
				s[j-1] = '9';
				s[j-2]--;
				string a(L-j+1,'9');
				s.replace(j-1,L-j+1,a);
			
			}
			//cout << s[j-1];
			
		}
		if(s[0] == '0') { 
		s = s.substr(1,s.size());
				}
	cout << "Case #"<<i+1<<": " <<s << endl;
		

	}

	return 0;
}
