#include<bits/stdc++.h>


void printMatrix(std::vector<std::vector<int>> mat, int m, int n){
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            std::cout<<mat[i][j]<<" ";
        }
        std::cout<<std::endl;
    }
}

void printSnakePattern(std::vector<std::vector<int>> mat, int m , int n){
    for(int i = 0; i < m; i++){
        if(i % 2 == 0){
            for(int j = 0; j < n; j++){
                std::cout<<mat[i][j]<<" ";
            }
        }
        else{
            for(int j = n - 1; j >= 0; j--){
                std::cout<<mat[i][j]<<" ";
            }
        }
        std::cout<<std::endl;
    }
}

int main(){
    int m = 4, n = 4;
    std::vector<std::vector<int>> mat{{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};
    printMatrix(mat, m, n);

    printSnakePattern(mat, m, n);
}