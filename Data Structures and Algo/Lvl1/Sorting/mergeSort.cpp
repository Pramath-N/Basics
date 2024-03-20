#include<bits/stdc++.h>

int* merge(int* arr, int low, int mid, int high){
    int s1 = mid - low + 1;
    int s2 = high - mid;

    int arr1[s1], arr2[s2];
    for(int i = 0; i < s1; i++){
        arr1[i] = arr[low + i];
    }

    for(int i = 0; i < s2; i++){
        arr2[i] = arr[mid + i + 1];
    }

    int i = 0, j = 0;
    int ind = low;
    while(i < s1 && j < s2){
        if(arr1[i] < arr2[j]){
            arr[ind] = arr1[i];
            i++;
            ind++;
        }
        if(arr2[j] < arr1[i]){
            arr[ind] = arr2[j];
            j++;
            ind++;
        }
    }
    
    while(i < s1){
        arr[ind] = arr1[i];
        i++;
        ind++; 
    }

    while(j < s2){
         arr[ind] = arr2[j];
        j++;
        ind++;    
    }
}

void mergeSort(int* arr, int low, int high){
    // if(low >= high) return;
    if(low < high){
        int mid = (low + high)/ 2;
        mergeSort(arr, low, mid);
        mergeSort(arr, mid + 1, high);
        merge(arr, low, mid, high);
    }

}

int main(){
    int arr[10] = {1,4,2,7,22,15,14,27};
    int n = 8;
    std::cout<<"Before Sorting: "<<std::endl;
    for(int i = 0; i < n;i++){
        std::cout<<arr[i]<<" ";
    } 
    std::cout<<std::endl;
    std::cout<<"After Sorting: "<<std::endl;
    mergeSort(arr, 0, n - 1);
    for(int i = 0; i < n;i++){
        std::cout<<arr[i]<<" ";
    } 
    return 0;
}
