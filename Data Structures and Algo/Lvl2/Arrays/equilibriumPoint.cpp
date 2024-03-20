#include<bits/stdc++.h>

bool equiPoint(int arr[], int n){

    //A bit inefficient solution: T.C = O(2N) && S.C = O(N)
    // int prefSum[n];
    // prefSum[0] = arr[0];
    // for(int i = 1; i < n; i++){
    //     prefSum[i] = prefSum[i - 1] + arr[i];
    // }
    // if(prefSum[n - 1] - prefSum[0] == 0) return true;
    // if(prefSum[n - 1] == 0) return true;
    // for(int i = 1; i < n - 1; i ++){
    //     if(prefSum[i - 1] == prefSum[n - 1] - prefSum[i]){
    //         return true;
    //     }
    // }
    // return false;

    //Optimnal O(2N), O(1)
    int rsum = 0;
    for (size_t i = 0; i < n; i++)
    {
        rsum += arr[i];
    }
    int lsum = 0;
    for (size_t i = 0; i < n; i++)
    {
        rsum -= arr[i];
        if(lsum == rsum){
            
            std::cout<<i<<std::endl;
            return true;
        }
        lsum += arr[i];
    }
    return false;

}

int main(){
    int arr[] = {4, -2, -2, 7};
    int n = 4;
    for(int i = 0; i < n; i++){
        std::cout<<arr[i]<<" ";
    }
    std::cout<<std::endl;
    if(equiPoint(arr, n) == true){
        std::cout<<"TRUE: "<<std::endl;
    }
    else{
        std::cout<<"FALSE: "<<std::endl;
    }
}