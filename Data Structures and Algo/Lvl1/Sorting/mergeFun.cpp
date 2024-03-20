#include<bits/stdc++.h>

std::vector<int> mergeTwoArr(std::vector<int> a, std::vector<int> b){
    std::vector<int> ans;
    int i = 0, j = 0;
    while (i < a.size() && j < b.size())
    {
        if(a[i] <= b [j]){
            ans.push_back(a[i]);
            i++;
        }
        else{
            ans.push_back(b[j]);
            j++;
        }
    }

    while(i < a.size()){
        ans.push_back(a[i]);
        i++;
    }

    while(j < b.size()){
        ans.push_back(b[j]);
        j++;
    }
    return ans;
    
}

void merge(std::vector<int> &arr, int low, int mid, int high){
    std::vector<int> arr2;
    for(int i = mid + 1; i < arr.size();i++){
        arr2.push_back(arr[i]);
        arr.erase(arr.begin() + i);
    }

    arr = mergeTwoArr(arr, arr2);
}

int main(){
    std::vector<int> a = {10, 15, 20, 11, 30};
    std::vector<int> ans = merge(a, 0, 2, 5);
    for(auto it : ans){
        std::cout<<it<<" ";  
    }
    std::cout<<std::endl;
}