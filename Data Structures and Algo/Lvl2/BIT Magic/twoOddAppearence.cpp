#include<bits/stdc++.h>

int* twoOddAppearence(int arr[], int n){
    //NOT THE OPTIMAL WHATEVER I CAN
    std::map<int, int> mp;
    // for(int i = 0; i < n; i++){
    //     mp[arr[i]]++;
    // }
    // int ind = 0;
    // static int ans[2];
    // for(auto it : mp){
    //     if(it.second == 1) {
    //         ans[ind] = it.first;
    //         ind++;
    //     }
    // }
    // return ans;

    int xr = arr[0];
    for(int i = 1; i < n; i++){
        xr ^= arr[i];
    }
    int k = xr & (~(xr - 1));
    int n1 = 0, n2 = 0;
    for(int i = 0; i < n; i++){
        if((arr[i]) % 2 == 0){
            if(n1 == INT_MIN) n1 = arr[i];
            else n1 ^= arr[i];
        }
        else{
            if(n2 == INT_MIN) n2 = arr[i];
            else n2 ^= arr[i];
        }
    }
    static int ans[2] = {n1, n2};
    return ans;
}

int main(){
    int arr[] = {3, 3, 22, 11, 6, 11, 6, 11}; 
    int* ans = twoOddAppearence(arr, 8);
    std::cout<<ans[0]<<" "<<ans[1];
    return 0;
}