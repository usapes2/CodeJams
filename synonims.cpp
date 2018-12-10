

/* create a dictionary of synonims that supports 
 * operations
 * add ( word 1, word 2 ) -- adding 2 words that are synonims
 * count ( word ) -- return the number of synonims
 * check (word1, word2) checks if 2 words are synonims
 */


#include<iostream>
#include<map>
#include<set>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;

void add(map<string,vector<string> >& m, string w1,string w2) {
	m[w1].push_back(w2);
	m[w2].push_back(w1);
}
int count(map<string,vector<string> >& m, string word) {
	auto itr = m.find(word);	
	if (itr==m.end()) {
		return 0;
	}else return m[word].size();
	
}

void check(map<string,vector<string> >&m,string w1,string w2){
	auto itr = m.find(w1);	
	bool trigg = false;

	if(itr!=m.end()) {
	for (auto i : (*itr).second) 
		if(i==w2) trigg = true;
	} 
	(trigg==true)?cout<<"YES"<<endl:cout<<"NO"<<endl;



}

int main(int argc, const char *argv[])
{
	std::map<string, vector<string> > mmap;
	add(mmap,"program","code");
cout<<	count(mmap,"cipher")<<endl;
	add(mmap,"code","cipher");
cout << count(mmap,"code")<<endl;;
cout<<	count(mmap,"program")<<endl;
	check(mmap,"code","program");
	check(mmap,"program","cipher");
	check(mmap,"cpp","java"); 
	return 0;
}
