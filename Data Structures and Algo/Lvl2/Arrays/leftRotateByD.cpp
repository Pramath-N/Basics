#include<bits/stdc++.h>
void leftRotate(int arr[], int n, int d){
    d = d % n;
    std::reverse(arr, arr + d);
    std::reverse(arr + d, arr + n);
    std::reverse(arr, arr + n);
}
int main(){
    int arr[] = {1, 2, 3, 4, 5};
    leftRotate(arr, 5, 3);
    for(int i = 0; i < 5; i++){
        std::cout<<arr[i]<<" ";
    }
}