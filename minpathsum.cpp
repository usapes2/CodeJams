#include<iostream>
#include<vector>
#include<algorithm>
#include<math.h>
using namespace std;

int minPathSum(vector<vector<int>> & grid){
	int nrow = grid.size();
	int ncol = grid[0].size();
	vector<vector<int>> res(grid);

	if (ncol == 1 and nrow ==  1) return grid[0][0];
	if (ncol == 1 ) {
		
		for (int i = 1; i < nrow; i++) {
		res[i][0] +=res[i-1][0];
			}

		return res[nrow-1][0];
	}

	if (nrow == 1 ){ 
		
		for (int j = 1; j < ncol; j++) {
			res[0][j] +=res[0][j-1];
			}
		return res[0][ncol-1];} 

	for (int i = 1; i < nrow; i++) {
		res[i][0] +=res[i-1][0];
	}

	for (int j = 1; j < ncol; j++) {
		res[0][j] +=res[0][j-1];
	}

	for (int i = 1; i < nrow; i++) {
		for (int j = 1; j < ncol; j++) {
			res[i][j] = min(res[i][j-1], res[i-1][j]) + res[i][j] ;
		}
	}
	return res[nrow-1][ncol-1];
}

int main(int argc, const char *argv[])
{
	
	return 0;
}
