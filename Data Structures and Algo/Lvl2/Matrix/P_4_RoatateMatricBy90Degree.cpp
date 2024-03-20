#include<bits/stdc++.h>


void printMatrix(std::vector<std::vector<int>> mat, int m, int n){
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            std::cout<<mat[i][j]<<" ";
        }
        std::cout<<std::endl;
    }
    std::cout<<"\n\n\n";
}

void rotateMatrix(std::vector<std::vector<int>> &mat, int m){
    //Naive O(N*N) S.C and T.C
    // std::vector<std::vector<int>> res(4, std::vector<int> (4, 0));
    // for(int i = 0; i < m; i++){
    //     for(int j = 0; j < m; j++){
    //         res[i][j] = mat[j][m - i - 1];
    //     }
    // }
    // for(int i = 0; i < m; i++){
    //     for(int j = 0; j < m; j++){
    //         mat[i][j] = res[i][j];
    //     }
    // }

    //Efficient O(N*N) T.C & O(1) S.C
    for(int i = 0; i < m; i++){
        for(int j = i + 1; j < m; j++){
            std::swap(mat[i][j], mat[j][i]);
        }
    }

    for(int i = 0 ; i < m / 2; i++){
        for(int j = 0; j < m; j++){
            std::swap(mat[i][j], mat[m - i - 1][j]);
        }
    }

}

int main(){
    int m = 4;
    std::vector<std::vector<int>> mat{{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};
    printMatrix(mat, m, m);
    
    rotateMatrix(mat, m);

    printMatrix(mat, m, m);
}