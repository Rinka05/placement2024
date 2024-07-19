
#include <bits/stdc++.h>
using namespace std;

void bubblesort(vector<int>&nums){
 for(int i = 0 ; i < nums.size(); i++){
    for(int j = i+1 ; j < nums.size() ; j++){
        if(nums[i] > nums[j]){
              swap(nums[i] , nums[j]);
        }
    }
 }
}


int main(){
    int n ; cin >> n ; 
    vector<int>nums(n);
    for(int i = 0 ; i < n ; i++){
        int x ; cin >> x ;
        nums[i] = x;
    }
 
   bubblesort(nums);
    for(int i = 0 ; i < n ; i++){
       cout << nums[i] << " ";
    }
}


