#include<bits/stdc++.h>

class hashmp{
        int bucket;
        std::vector<std::vector<int>> mapp;

    public:
        hashmp(int b, int s){
            bucket = b;
            std::vector<std::vector<int>> mapp(b);
        }

        bool search(int a){
            int index = a % bucket;
            for(auto it : mapp[index]){
                if(it == a){
                    return true;
                }
            }
            return false;
        }
};

int main(){
    hashmp o(4,3);
    
}