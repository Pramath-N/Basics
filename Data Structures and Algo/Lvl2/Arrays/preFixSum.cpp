#include<bits/stdc++.h>

int getSum(int arr[], int n, int l, int h){
    if(l == 0) return arr[h];
    return arr[h] - arr[l - 1];
}

int main(){
    int arr[] = {2, 8, 3, 9, 6, 5, 4};
    int n = 7;
    int prefixSum[7];
    prefixSum[0] = arr[0];
    for(int i = 0; i < n; i++){
        std::cout<<arr[i]<<" ";
    }

    for(int i = 1; i < n; i++){
        prefixSum[i] = prefixSum[i - 1] + arr[i];
    }
    std::cout<<std::endl;
    std::cout<<getSum(prefixSum, n, 0, 2)<<std::endl;
    std::cout<<getSum(prefixSum, n, 1, 3)<<std::endl;
    std::cout<<getSum(prefixSum, n, 2, 6)<<std::endl;

}