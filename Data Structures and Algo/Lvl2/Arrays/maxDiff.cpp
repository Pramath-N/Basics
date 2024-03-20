#include<bits/stdc++.h>

int maxDiff(int arr[], int n){
    // Positive Diff only
    int small = INT_MAX, diff = INT_MIN;
    for(int i = 0; i < n; i++){
        diff = std::max(diff, (arr[i] - small));
        if(arr[i] < small){
            small = arr[i];
        }
        else{
            diff = std::max(diff, (arr[i] - small));
        }
        
    }
    return diff;

    //Naive:
    // int diff = INT_MIN;
    // for(int i = 0; i < n; i++){
    //     for(int j = i + 1; j < n; j++){
    //         diff = std::max(arr[j] - arr[i], diff);
    //     }
    // }
    // return diff;
}

int main(){
    int arr[] = {10, 20, 30};
    for(int i = 0; i < 3; i++){
        std::cout<<arr[i]<<" ";
    }
    std::cout<<std::endl<<maxDiff(arr, 3);

}