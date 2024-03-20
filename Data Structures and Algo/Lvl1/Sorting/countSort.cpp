#include<bits/stdc++.h>

void countSort(int arr[], int n, int k){
    int harr[5] = {0};
    for(int i = 0; i < n; i++){
        harr[arr[i]]++;
    }
    int ind = 0;
    for(int i = 0; i < k; i++){
        while(harr[i] > 0){
            harr[i]--;
            arr[ind] = i;
            ind++;
        }
    }
}

int main(){
    int arr[] = {1,0,4,4,3,2,2,3,4};
    countSort(arr, 9, 5);

    for(int i = 0; i < 9; i++){
        std::cout<<arr[i]<<" ";
    }
}