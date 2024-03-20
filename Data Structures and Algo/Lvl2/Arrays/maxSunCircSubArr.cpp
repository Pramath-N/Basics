#include<bits/stdc++.h>

int maxSum(int arr[], int n){
    int ans = 0, sum = 0;

    //NAive SOlution: O(NSquare)
    // for(int i = 0; i < n; i++){
    //     int sum = arr[i];
    //     for(int j = (i + 1) % n; j != i; j = (j + 1) % n){
    //         std::cout<<i<<" "<<arr[j]<<" "<<sum<<std::endl;
    //         sum += arr[j];
    //         ans = std::max(ans, sum);
    //     }
    // }
    // return ans;
    //optimal is moores voting algo try to write it on your own next time O(n), O(1)
}

int main(){
    int arr[] = {-8, 7, 6};
    int n = 3;
    for(int i = 0; i < n; i++){
        std::cout<<arr[i]<<" ";
    }
    std::cout<<std::endl;
    std::cout<<maxSum(arr, n)<<std::endl;
}