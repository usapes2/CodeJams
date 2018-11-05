#include<iostream>
#include<map>
#include<set>
#include<string>
#include<algorithm>
#include<vector>
#include<cmath>
using namespace std;
/*! \class Recentcounter
 *  \brief Brief class description
 *
 *  Detailed description
 */
class Recentcounter
{
public:
	Recentcounter(){
	}
	vector<int> v;

	int ping(int t) {

		v.push_back(t);

		int count = 0;
		for (auto i : v) {
			
			if(t > 3000) {

			if( i >= abs(t-3000)) count++;

			}else {
				count++;
			}

		}

	return count ;

	}

};
int main(int argc, const char *argv[])
{
	
	Recentcounter c;
cout<<	c.ping( 1)<<endl;;
cout<<	c.ping( 100)<<endl;
cout<<	c.ping( 3001)<<endl;
cout<<	c.ping( 3002)<<endl;
	

	return 0;
}
