#include<bits/stdc++.h>

std::vector<int> unionArr(int arr1[], int n1, int arr2[], int n2){
    std::vector<int> res(n1 + n2);
    int i = 0, j = 0;
    //Naive :
    //Copy both arrays into another array;
    //sort resultant array
    //delete dups

    // for(int i = 0; i < n1; i++){
    //     res[i] = arr1[i];
    // }
    // for(int i = 0; i < n2; i++){
    //     res[n1 + i] = arr2[i];
    // }
    // sort(res.begin(), res.end());
    // for(int i =1; i < res.size(); i++){
    //     if(res[i] == res[i - 1]){
    //         res.erase(res.begin() + i);
    //         i--;
    //     }
    // }
    // return res;

    //Better I suppose:
    int ind = 0;
    while (i < n1 && j < n2)
    {
        if(i > 0 && arr1[i] == arr1[i - 1]){
            i++;
            continue;
        }
        if(j > 0 && arr2[j] == arr2[j - 1]){
            j++;
            continue;
        }
        if(arr1[i] < arr2[j]){
            res[ind] = arr1[i];
            i++;
            continue;
        }
        if(arr1[i] > arr2[j]){
            res[ind] = arr2[j];
            ind++;
            j++;
        }
        if(arr1[i] == arr2[j]){
            res[ind] = arr1[i];
            ind++;
            i++, j++;
        }
    }
    while (i < n1)
    {
        if(i > 0 && arr1[i] == arr1[i - 1]){
            i++;
            continue;
        }
        res[ind] = arr1[i];
        ind++;
        i++;
    }
    
    while (j < n2)
    {
        if(j > 0 && arr1[j] == arr1[j - 1]){
            j++;
            continue;
        }
        res[ind] = arr2[j];
        ind++;
        j++;
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

    for(auto &it : unionArr(arr1, n1, arr2, n2)){
        std::cout<<it<<" ";
    }
    return 0;
}