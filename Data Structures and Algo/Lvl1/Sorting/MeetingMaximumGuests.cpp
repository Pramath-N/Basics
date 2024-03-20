#include<bits/stdc++.h>

int maxGuests(int arrival[], int departure[], int n){
    std::sort(arrival, arrival + n);
    std::sort(departure, departure + n);
    int res = 0, curr = 0;
    int i = 0, j = 0;
    while(i < n && j < n){
        if(arrival[i] > departure[j] ){
            curr--;
            j++;
        }
        else if(arrival[i] < departure[j]){
            i++;
            curr++;
            res = std::max(res, curr);
        }
    }
    return res;
}

int main(){
    int arrival[] = {900, 600, 700};
    int departure[] = {1000, 800, 730};
    int n = 3;

    for(int i = 0; i < n; i++){
        std::cout<<arrival[i]<<" ";
    }
    std::cout<<std::endl;

    for(int i = 0; i < n; i++){
        std::cout<<departure[i]<<' ';
    }
    std::cout<<std::endl;

    std::cout<<"Maximum Guests that can be met : "<<maxGuests(arrival, departure, n);
    return 0;
}