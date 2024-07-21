#include <bits/stdc++.h>
using namespace std;

 bool solve(vector<int>&nums){
    vector<int>p(nums.size());
    int n = nums.size();
    for(int i = 0  ; i < n ; i++){
        p[i] = i+1;
    }

    for(int i = 0 ; i < n-1; i++){
        if(p[i] != nums[i]){
            if(p[i+1] == nums[i] ){
                swap(p[i], p[i+1]);
            }
             else if( nums[i] == p[i+2]){
                swap(p[i] , p[i+2]);
            }
        }
    }
    for(int i = 0 ; i < n ; i++){
        if(p[i] != nums[i])return false;
    }
    return true;
 }

int main(){
    int t ; cin >> t ;
    while(t--){
        
     int n ; cin >> n ;
     vector<int>nums(n);
     for(int i = 0 ; i < n ; i++){
        int x ; cin >> x ;
        nums[i] = x;
     }

           cout << solve(nums) << endl;
    }

}