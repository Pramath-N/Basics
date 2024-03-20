#include<bits/stdc++.h>

int maxAmm(int arr[], int n){
    int left = 0, amm = 0, subAm = 0, finAm= 0;
    for(int i = 1; i < n; i++){
        if(arr[i] < arr[left]){
            amm = std::max(amm, (arr[i] * (i - left - 1)) - subAm);       
            subAm += arr[i];
        }
        else{
            amm = std::max(amm, (arr[left] * (i - left - 1)) - subAm);
            left = i;
            subAm = 0;
            finAm += amm;
            amm = 0;
        }
    }
    return amm;
}

int main(){
    int heights[] = {5, 0, 6, 2, 3};

    for(int i = 0; i < 5; i++){
        std::cout<<heights[i]<<" ";
    }
    std::cout<<std::endl;

    std::cout<<maxAmm(heights, 5);
}