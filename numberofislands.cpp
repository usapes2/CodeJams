#include<iostream>
#include<map>
#include<set>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;

void _mark(int i,int j, vector<vector<char>>& grid) {
	int nrow = grid.size();
	int ncol = grid[0].size();

	grid[i][j] = 'a';

	if ( j-1 != -1 and grid[i][j-1] == '1') _mark(i,j-1,grid) ;
	if ( j+1 != ncol and grid[i][j+1] == '1') _mark(i,j+1,grid) ;
	if ( i-1 != -1 and grid[i-1][j] == '1') _mark(i-1,j,grid) ;
	if ( i+1 != nrow and grid[i+1][j] == '1') _mark(i+1,j,grid) ;


}

int numIslands(vector<vector<char>>& grid) {
	int nrow = grid.size();
	int ncol = grid[0].size();

	int count = 0;
		for (int i = 0; i <nrow; i++) {
			for (int j = 0; j < ncol; j++) {
				if(grid[i][j] == '1') {
					count+=1;
					_mark(i,j,grid);
				}
				
			}
			
		}



	return count;
}
int main(int argc, const char *argv[])
{
	
	return 0;
}
