#include<bits/stdc++.h>

int maxProfit(int arr[], int n){
    int ans = 0;

    for(int i = 1; i < n; i++){
        if(arr[i] > arr[i - 1]){
            ans += (arr[i] - arr[i - 1]);
        }
    }
    return ans;
}

int main(){
    int arr[] = {1, 5, 3, 8, 12};
    for(int i = 0; i < 5; i++){
        std::cout<<arr[i]<<" ";
    }
    std::cout<<std::endl<<maxProfit(arr, 5);

}