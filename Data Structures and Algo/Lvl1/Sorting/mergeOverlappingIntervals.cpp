#include<bits/stdc++.h>

int mergeIntervals(std::vector<std::pair<int, int>> &intervals){
    int res = 0;
    std::sort(intervals.begin(), intervals.end());
    for(int i = 1; i < intervals.size(); i++){
        if(intervals[i].first < intervals[res].second){
            intervals[res].first = std::min(intervals[i].first, intervals[res].first);
            intervals[res].second = std::max(intervals[i].second, intervals[res].second);
        }
        else{
            res++;
            intervals[res] = intervals[i];
        }
    }
    return res;
}
int main(){
    std::vector<std::pair<int, int>> intervals = {{5, 10}, {3, 15}, {18, 30}, {2, 7}};

    for(int i = 0; i < intervals.size(); i++){
        std::cout<<"( "<<intervals[i].first<<", "<<intervals[i].second<<" ) ";
    }
    std::cout<<std::endl;
    int finInd = mergeIntervals(intervals);
    for(int i = 0; i <= finInd; i++){
        std::cout<<"( "<<intervals[i].first<<", "<<intervals[i].second<<" ) ";
    }
    std::cout<<std::endl;
}