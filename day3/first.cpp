#include <bits/stdc++.h>
using namespace std;

void solve(vector<int>&nums, int n ){
    for(int i = 1 ; i < n ; i++){
        if(nums[i] < nums[i-1] && (abs(nums[i]-nums[i-1]) == 1)){
            swap(nums[i] , nums[i-1]);
        }
    }
    vector<int>r;
    r = nums;
    sort(r.begin(), r.end());
    for(int i = 0 ; i < n ; i++){
        if(nums[i] != r[i]){
            cout << "No" << endl;
           return;
        }
    }
  cout << "Yes" << endl;

}




int main(){
    int t ; cin >> t ;
    while(t--){
        int n ; cin >> n ;
        vector<int>nums(n);
        for(int i = 0; i < n ; i++){
            int x ; cin >> x ;
            nums[i] = x;
        }
        solve(nums, n);
    }
     


}
