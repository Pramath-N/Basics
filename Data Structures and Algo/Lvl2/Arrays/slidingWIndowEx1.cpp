#include<bits/stdc++.h>

int maxSubArrSumOfSizeK(int arr[], int n, int k){
    int sum = 0;
    for(int i = 0; i < k; i++){
        sum += arr[i];
    }
    int ans = sum;
    for(int i = 1; i < n - k; i++){
        sum -= arr[i - 1];
        sum += arr[k - 1+ i];
        ans = std::max(ans, sum);
    }
    return ans;
}

int main(){
    int arr[] = {10, 5, -2, 20, 1};
    int n = 5;
    int k = 3;
    for(int i = 0; i < n; i++){
        std::cout<<arr[i]<<" ";
    }
    std::cout<<std::endl;
    std::cout<<"Max sub array sum is: "<<maxSubArrSumOfSizeK(arr, n, k);
}