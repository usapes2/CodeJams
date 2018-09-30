#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    
    
     int uniquePaths(int m, int n) {
    
         if (m == 0 and n==0) { return 0; }
         if (m == 0 ){ return 0; }
           if (n == 0 ){ return 0; }
         
    long long int f[m][n];
     for (int i = 0; i < n ;i++)
         f[0][i] = 1;
         
     for (int i = 0; i < m ;i++)
         f[i][0] = 1;
         
     for (int i = 1; i < m ; i++)
         for(int j = 1; j < n; j++)
             f[i][j] = f[i-1][j] + f[i][j-1];
         
      return f[m-1][n-1];
         
    }
    
    
    /*int uniquePaths(int m, int n) {
        return choose(m+n-2,n-1);
    }
    
    double choose(int n, int k) {
    if (k == 0) return 1 ;
    return (n * choose(n - 1, k - 1)) / k ; } */
    
};

int main(int argc, const char *argv[])
{
	
	return 0;
}
