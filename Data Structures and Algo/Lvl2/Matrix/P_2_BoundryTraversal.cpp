#include<bits/stdc++.h>


void printMatrix(std::vector<std::vector<int>> mat, int m, int n){
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            std::cout<<mat[i][j]<<" ";
        }
        std::cout<<std::endl;
    }
}

void printBoundry(std::vector<std::vector<int>> mat, int m, int n){
    if(m == 1)
	{
		for(int i = 0; i < n; i++)
			std::cout << mat[0][i] << " ";
	}
	else if(n == 1)
	{
		for(int i = 0; i < n; i++)
			std::cout << mat[i][0] << " ";
	}
	else
	{
		for(int i = 0; i < n; i++)
			std::cout << mat[0][i] << " ";
		for(int i = 1; i < m; i++)
			std::cout << mat[i][n - 1] << " ";
		for(int i = n - 2; i >= 0; i--)
			std::cout << mat[m - 1][i] << " ";
		for(int i = m - 2; i >= 1; i--)
			std::cout << mat[i][0] << " ";
	}
}

int main(){
    int m = 4, n = 4;
    std::vector<std::vector<int>> mat{{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};
    printMatrix(mat, m, n);

    printBoundry(mat, m, n);
}