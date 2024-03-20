    #include<bits\stdc++.h>
    using namespace std;
    
    void whowins (std::vector<int>& nums,int a, int b, char p,std::pair <int,int> &score){
        if(p == 'a'){
            if(nums.size() == 1){
                a += nums[0];
                score.first = a;
                score.second = b;
            }
            if(nums[nums.size() - 1] > nums[0]){
                a += nums[nums.size() - 1];
                nums.erase(nums.end() - 1);
                whowins(nums,a,b,'b',score);
            }
            else{
                a += nums[0];
                nums.erase(nums.begin());
                whowins(nums,a,b,'b',score);
            }
        }
        else{
            if(nums.size() == 1){
                b += nums[0];
                score.first = a;
                score.second = b;
            }
            if(nums[nums.size() - 1] > nums[0]){
                b += nums[nums.size() - 1];
                nums.erase(nums.end() - 1);
                whowins(nums,a,b,'a',score);
            }
            else{
                b += nums[0];
                nums.erase(nums.begin());
                whowins(nums,a,b,'a',score);
            }
        }
    }
    bool predictTheWinner(vector<int>& nums) {
        std::pair<int,int> score;
        whowins(nums,0,0,'a',score);
        if(score.first >= score.second ) return true;
        return false;
    }
    
    int main(){
        std::vector<int> arr = {22,33,4,5,66};
        std::cout<<predictTheWinner(arr);
    }