#include<bits/stdc++.h>

int dist(std::vector<int> &arr){
    int d = 0;
    for(int i = 0; i < arr.size(); i++){
        int flag = 1;
        for(int j = 0; j < arr.size();j++){
            if(arr[j] == arr[i] && i != j){
                flag = -1;
                break;
            }
            
        }
        if(flag == 1) d++;
    }
    return d;
}

int main(){

    std::vector<int> arr = {1,2,3,2,22};
    int no = dist(arr);
    std::cout<<"The number of distinct elements is: "<<no<<std::endl;       
    return 0;

}