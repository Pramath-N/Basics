#include<bits/stdc++.h>
using namespace std;
void reverseInGroups(vector<long long>& arr, int n, int k){
        // code here
        int ind = 0, it = 1;
        while(ind < n){
            int fa = ind;
            for(int i = ind; i < (fa + k)/2 && ind < n; i++){
                if(fa + k > n) k = n;
                std::swap(arr[i], arr[k - i - 1]);
                ind += 1;
            }
            ind += k;
            cout<<it<<"   "<<ind<<endl;
            it++;
        }
}

int main(){
    int n = 5, k = 3;
    std::vector<long long> arr = {1,2,3,4,5};

    for(auto it : arr){
        std::cout<<it<<" ";
    }
    std::cout<<std::endl;\


    reverseInGroups(arr, n, k);

    for(auto it : arr){
        std::cout<<it<<" ";
    }
    std::cout<<std::endl;
}
