#include<bits/stdc++.h>


void printMatrix(std::vector<std::vector<int>> mat, int m, int n){
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            std::cout<<mat[i][j]<<" ";
        }
        std::cout<<std::endl;
    }
}

void solve(std::vector<std::vector<int>> &mat, int top, int bottom, int right, int left){
    if(top > bottom || left > right) return;
    for(int i = left; i <= right; i++){
        std::cout<<mat[top][i]<<" ";
    }
    for(int i = top + 1; i <= bottom; i++){
        std::cout<<mat[i][right]<<" ";
    }
    if(left <= right){
        for(int i = right - 1; i >= left; i--){
            std::cout<<mat[bottom][i]<<" ";
        }
    }
    if(top <= bottom){
        for(int i = bottom - 1; i > top; i--){
            std::cout<<mat[i][left]<<" ";
        }
    }
    solve(mat, top + 1, bottom - 1, left + 1, right - 1);
}
void spiralMatrix(std::vector<std::vector<int>> &mat, int n, int m){
    solve(mat, 0, 0, n, m);
}

int main(){
    int n = 3, m = 4;
    std::vector<std::vector<int>> mat{{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};
    printMatrix(mat, m, m);

    spiralMatrix(mat, n, m);

}