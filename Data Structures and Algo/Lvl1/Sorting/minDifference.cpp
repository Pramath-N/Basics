#include<bits/stdc++.h>

int minDiff(int arr[], int n){
    std::sort(arr, arr + n);
    int ans = INT_MAX, curr;
    for(int i = 1; i < n; i++){
        curr = std::abs(arr[i] - arr[i - 1]);
        ans = std::min(ans, curr);
    }
    return ans;
}

int main(){
    int arr[] = {1, 8, 12, 5, 18};
    int n = 5;

    for(int i = 0; i < n; i++){
        std::cout<<arr[i]<<" ";
    }
    std::cout<<std::endl;

    std::cout<<"Minimum Difference is: "<<minDiff(arr, n);
}