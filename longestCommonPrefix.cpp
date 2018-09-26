#include<iostream>
#include<vector>
#include<string>

using namespace std;


string longestCommonPrefix(vector<string>& strs) {

	string out = "";
	int idx = 0;
	bool trigger = true;

	while (trigger) {
		if( idx > strs[0].size()) {trigger = false; break;}

		char ch = strs[0][idx]; 

		for (int i = 0; i < strs.size(); i++) {
			/* code */
			if (idx > strs[i].size() or strs[i][idx] != ch) {
				/* code */
				trigger = false;
				break;
			}

			if(trigger == true) { out+=ch;}
		}
		idx++;

	}

}

int main(int argc, const char *argv[])
{
	
	return 0;
}
