#include<bits/stdc++.h>

std::vector<int> merge(std::vector<int> a, std::vector<int> b){
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

int main(){
    std::vector<int> a = {10, 15, 20};
    std::vector<int> b = {5, 6, 6, 15};
    std::vector<int> ans = merge(a, b);
    for(auto it : ans){
        std::cout<<it<<" ";  
    }
    std::cout<<std::endl;
}