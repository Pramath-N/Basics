#include<bits/stdc++.h>

std::vector<int> intersection(int arr1[], int n1, int arr2[], int n2){
    std::vector<int> res;
    int i = 0, j = 0;
    while(i < n1 && j < n2){
        if(i > 0 && arr1[i] == arr1[i - 1]){
            i++;
            continue;
        }
        if(arr1[i] < arr2[j]){
            i++;
        }
        else if(arr1[i] > arr2[j]){
            j++;
        }
        else{
            res.push_back(arr1[i]);
            i++, j++;
        }
    }
    
    return res;
}

int main(){
    int arr1[] = {3, 5, 10, 10, 10, 15, 15, 20};
    int n1 = 8;
    int arr2[] = {5, 10, 10, 15, 30};
    int n2 = 5;

    for(int i = 0; i < n1; i++){
        std::cout<<arr1[i]<<" ";
    }
    std::cout<<std::endl;
    for(int i = 0; i < n2; i++){
        std::cout<<arr2[i]<<" ";
    }
    std::cout<<std::endl;

    for(auto &it : intersection(arr1, n1, arr2, n2)){
        std::cout<<it<<" ";
    }
    return 0;
}