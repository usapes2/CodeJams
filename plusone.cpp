#include<iostream>
#include<vector>
using namespace std;

vector<int> plusOne(vector<int>& digits) {
	int carrier = 1;
	int i = digits.size()-1;
	while (i>=0 and carrier > 0) {
		int newVal = digits[i] + carrier;	
		carrier = newVal / 10;
		digits[i] = newVal%10;
		i--;
	}

	if (carrier != 0) {
		digits.insert(digits.begin(),carrier);
	}
	return digits;



}
int main(int argc, const char *argv[])
{
	vector<int> v;
	v.push_back(2);
	v.push_back(1);
	v.push_back(4);

	
	return 0;
}
