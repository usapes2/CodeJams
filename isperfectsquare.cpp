/* Finding perfectct square 2 methods 
 * liner time o(n)
 * lon(n) bisections
 */
#include<iostream>
#include<vector>
#include<math.h>

using namespace std;

/*
bool isPerfectSquare(int num) {
        int j = 1;
        
        while (j*j<=num){
            if (j*j==num){
                return true;    
            }
            j++;
        }
        return false;
    }
*/

bool isPerfectSquare(int num) {

	int left = 1;
	int right = num;

	while (left <= right) {

		int mid = floor((right + left)/ 2 );

		cout << "Mid: " <<mid<<endl;

		if (mid*mid > num) {
			right = mid -1;
			cout << "<-"<<endl;

		} else if ( mid*mid == num){
			cout << " catch " <<endl;
			return true;

		} else if (mid*mid < num ){
			cout << " -> " <<endl;
			left = mid +1;
		}

		}
	return false;
	}


	

int main(int argc, const char *argv[])
{
	cout << isPerfectSquare(100) << endl;	
	return 0;
}
