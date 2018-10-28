#include<iostream>
#include<map>
#include<set>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;

bool isLongPressedName(string name, string typed) {

	int i,j = 0;
	while (i < name.size() and j < typed.size()) {
		while( j< typed.size() and typed[j] != name[i]) {
			j+=1;
		}
		if (j == typed.size()) {
			return false;
		}
		i+=1;
		j+=1;
		
	}

	if (i == name.size()) 
		return true;
	

	if(j== typed.size()) return false;

	return true;
}

int main(int argc, const char *argv[])
{
	cout << isLongPressedName("alex","alex");	
}
