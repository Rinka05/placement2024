#include<bits/stdc++.h>
using namespace std;

vector<int>ans;
void solve(int i , vector<int>&nums , int x){
    if(i >= nums.size() )return;
     if(nums[i] == x)ans.push_back(i);
    solve(i+1 , nums , x);
   
}



int main(){
    int n ; cin >> n;
    vector<int>nums(n);
    for(int i = 0 ; i < n ; i++){
        int p ; cin >> p ;
        nums[i] = p;
    }
    int x ; cin >> x;
    solve(0 , nums , x);
    for(int i = 0 ; i < ans.size(); i++){
        cout << ans[i] << " ";
    }
}