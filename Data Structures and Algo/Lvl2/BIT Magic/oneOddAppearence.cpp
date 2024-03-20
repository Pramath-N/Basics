#include<bits/stdc++.h>

int oddAppearence(int arr[], int n){
    int ans = arr[0];
    for(int i = 1; i < n; i++){
        ans ^= arr[i];
    }
    return ans;
}

int main(){
    int arr[7] = {3, 3, 22, 11, 6, 11, 6}; 
    std::cout<<oddAppearence(arr, 7);
    return 0;
}