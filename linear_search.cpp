#include<iostream>
#include<map>
#include<set>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
template<typename Item_Type>
int linear_search(const std::vector<Item_Type>& items,
		const Item_Type& target, size_t pos_first) {
	if(pos_first == items.size())
		return -1;
	else if (target == items[pos_first])
		return pos_first;
	else return linear_search(items, target, pos_first +1);
}

template<typename Item_Type>
// wrapper
int linear_search(const std::vector<Item_Type>& items,
		const Item_Type& target) {
	return linear_search(items, target, 0);
}
int main(int argc, const char *argv[])
{
	vector<int> vi = {
		1,2,3,4,5,6,7,8,99,100
	};

	int a = 6;
	cout << linear_search(vi, 6);


	
	return 0;
}
