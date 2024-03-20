#include<bits/stdc++.h>

void powerSet(std::string s){
    int n =  pow(2,s.size());

    for(int i = 0; i < n; i++){
        int temp = i;
        for(int j = 0; j < s.size(); j++){
            if((temp & 1 << j )!= 0) std::cout<<s[j];
            temp >> 1;
        }
        std::cout<<std::endl;
    }
}

int main(){
    std::string s = "abc";
    powerSet(s);
    return 0;
}