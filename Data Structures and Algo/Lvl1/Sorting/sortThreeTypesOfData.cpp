//Like sorting 0s first then 1s then 2s
//Like sorting elements less than given first then all occurances of pivot then all elements greater than pivot

//Naive appproach is using temporary array

#include<bits/stdc++.h>

void sort012(int arr[], int n){
    //Dutch National Flag Algorithm
    int low = 0, mid = 0, high = n - 1;
    while(mid <= high){
        if(arr[mid] == 0){
            std::swap(arr[mid], arr[low]);
            low++;
            mid++;
        }
        else if(arr[mid] == 1){
            mid++;
        }
        else{
            std::swap(arr[high], arr[mid]);
            high--;
        }
    }
}

int main(){
    int arr[] = {0, 1, 1, 2, 0, 1, 0, 0, 1, 2};
    int n = 10;

    for(int i = 0; i < n; i++){
        std::cout<<arr[i]<<" ";
    }
    std::cout<<std::endl;

    sort012(arr, n);

    for(int i = 0; i < n; i++){
        std::cout<<arr[i]<<" ";
    }
    std::cout<<std::endl;
}