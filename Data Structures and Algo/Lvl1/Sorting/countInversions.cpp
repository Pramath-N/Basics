#include<bits/stdc++.h>

int countInversions(int arr[], int n){
    int count = 0;
    for(int i = 0; i < n - 1; i++){
        for(int j = i + 1; j < n; j++){
            if(arr[j] < arr[i]) count++;
        }
    }
    return count;
}

int main(){
    int arr[] = {2, 4, 1, 3, 5};
    int n = 5;

    for(int i = 0; i < n; i++){
        std::cout<<arr[i]<<" ";
    }

    std::cout<<std::endl;

    std::cout<<"\nThe total number of inversions in the given array are: "<<countInversions(arr, n);
    return 0;
}