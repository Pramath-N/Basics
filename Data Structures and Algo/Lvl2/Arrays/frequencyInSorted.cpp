#include<bits/stdc++.h>

std::vector<std::pair<int, int>> freqSorted(int arr[], int n){
    std::vector<std::pair<int, int>> ans;
    int count = 0;
    for(int i = 0; i <= n; i++){
        if(i == n){
            ans.push_back({arr[i - 1], count});
        }
        else if(i != 0 && arr[i] != arr[i - 1]){
            ans.push_back({arr[i - 1], count});
            count = 0;
            
        }
        count++;
    }
    return ans;
}

int main(){
    int arr[] = {7, 10, 4, 7, 6, 5};
    std::sort(arr, arr + 7);
    for(int i = 0; i < 7; i++){
        std::cout<<arr[i]<<" ";
    }
    std::cout<<std::endl;
    std::vector<std::pair<int, int>> freq = freqSorted(arr, 6);
    for(auto it : freq){
        std::cout<<it.first<<" "<<it.second<<std::endl;
    }
}