#include<bits/stdc++.h>

int maxSubArrSum(int arr[], int n){

    //Naive O(n*n)
    // int ans = INT_MIN;
    // for(int i = 0; i < n; i++){
    //     int sum =0;
    //     for(int j = i; j < n; j++ ){
    //         sum += arr[j];
    //         ans = std::max(ans, sum);
    //     }
    // }
    // return ans;
    int maxEnding = arr[0];
    int maxSum = arr[0];
    for(int i = 1; i < n; i++){
        maxEnding = std::max(maxEnding + arr[i], arr[i]);
        maxSum = (maxSum > maxEnding) ? maxSum : maxEnding;
    }
    return maxSum;
}

int main(){
    int arr[] = {-5, -1, -8};
    int n = 3;
    for(int i = 0; i < n; i++){
        std::cout<<arr[i]<<" ";
    }
    std::cout<<std::endl;
    std::cout<<"Max sub array sum is: "<<maxSubArrSum(arr, n);
}