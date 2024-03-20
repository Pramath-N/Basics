#include<bits/stdc++.h>

bool subArrGivenSum(int arr[], int n, int s){
    int sum = arr[0];
    int k = 0;
    for(int i = 1; i < n; i++){
        if(sum == s){
            return true;
        }
        if(sum < s){
            sum += arr[i];
        }
        else{
            sum -= arr[k];
            k++;
            i--;
        }
    }
    return false;
}

int main(){
    int arr[] = {2, 4};
    int n = 2;
    int s = 3;
    for(int i = 0; i < n; i++){
        std::cout<<arr[i]<<" ";
    }
    std::cout<<std::endl;
    (subArrGivenSum(arr, n, s) == true) ? std::cout<<"YES" : std::cout<<"NO";
}