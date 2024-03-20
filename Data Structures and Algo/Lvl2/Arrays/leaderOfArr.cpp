#include<bits/stdc++.h>

std::vector<int> leaderArr(int arr[], int n){
    std::vector<int> leader;
    int greatest = INT_MIN;

    for(int i = n - 1; i >= 0; i--){
        if(arr[i] > greatest){
            leader.push_back(arr[i]);
            greatest = arr[i];
        }
    }
    return leader;
}

int main(){
    int arr[] = {7, 10, 4, 3, 6, 5, 2};
    for(int i = 0; i < 7; i++){
        std::cout<<arr[i]<<" ";
    }
    std::cout<<std::endl;
    std::vector<int> leader = leaderArr(arr, 7);
    for(auto it : leader){
        std::cout<<it<<" ";
    }
}