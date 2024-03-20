#include<bits/stdc++.h>

int maxConOnes(int arr[], int n){
    int ans = 0, count = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] == 1){
            count++;
        }
        else{
            ans = std::max(ans, count);
            count = 0;
        }
    }
    return ans;
}

int main(){
    int arr[] = {0, 1, 1, 1, 0, 1, 1};
    int n = 7;

    for(int i = 0; i < n; i++){
        std::cout<<arr[i]<<" ";
    }
    std::cout<<std::endl;
    std::cout<<maxConOnes(arr, n);
}