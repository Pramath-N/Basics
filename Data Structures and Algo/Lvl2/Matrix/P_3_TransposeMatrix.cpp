#include<bits/stdc++.h>


void printMatrix(std::vector<std::vector<int>> mat, int m, int n){
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            std::cout<<mat[i][j]<<" ";
        }
        std::cout<<std::endl;
    }
}

void transposeMatrix(std::vector<std::vector<int>> &mat, int m){

    //NAive Method using Extra space:
    // std::vector<std::vector<int>> res(m, std::vector<int>(m, 0));
    // for(int i = 0; i < m; i++){
    //     for(int j = 0; j < m; j++){
    //         res[i][j] = mat[j][i];
    //     }
    // }

    // for(int i = 0; i < m; i++){
    //     for(int j = 0; j < m; j++){
    //         mat[i][j] = res[i][j];
    //     }
    // }

    //I Think Better:
    for(int i = 0; i < m; i++){
        for(int j = i + 1; j < m; j++){
            std::swap(mat[i][j], mat[j][i]);
        }
    }
}

int main(){
    int m = 4;
    std::vector<std::vector<int>> mat{{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};
    printMatrix(mat, m, m);

    transposeMatrix(mat, m);

    printMatrix(mat, m, m);
}