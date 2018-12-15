#include<iostream>
#include<string>
#include<vector>
using namespace std;

bool wordBreak(string s, vector<string>& wordDict){

	if (s.size() == 0) {
		return true;
	}
	vector<bool> v(false,s.size()+1);
	v[0] = true;

	bool ret = false;
	
	int i;
	for (int i = 0; i < s.size(); i++) {
		
		string curStr = s.substr(0,i);

		for (int j = 0; j < wordDict.size(); j++) {
				string word = wordDict[j];
				int w_sz = word.size();
				
				if (w_sz <= i and word == curStr.substr(i-w_sz , w_sz)) {
					v[i]=v[i-w_sz+1];

				}

			}
			
			
		}

return v[s.size()+1];
	}		


int main(int argc, const char *argv[])
{
	
	vector<string> v;
	string s("cat");
	v.push_back("cats");
	v.push_back("dog");
	v.push_back("sand");
	v.push_back("and");
	v.push_back("cat");
	cout << wordBreak(s,v);
	
	
	return 0;
}
