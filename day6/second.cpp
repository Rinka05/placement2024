#include <bits/stdc++.h>
using namespace std;
#define ll long long

// void solve( vector<ll>&nums){
//      int n = nums.size();
//      vector<pair<int , int>>ans(n);
//      ans[0] = {nums[0], 1};
//      int j = 0;
//      for(int i = 1 ; i < n ; i++){
//         if(nums[i-1] <= nums[i]){
//             if(ans[i-1].first >= ans[i].first){
//                 ans[i].second = ans[i-1].second+1;
//             }
//             int p = ans[i].first;
//             j = i-1;
//             while(p >= nums[j] && j >=0){
//                 ans[i].second += ans[j].second;
//                 j--;
//             }
//         }
//      }
//      for(int i = 0 ; i < n ; i++){
//         cout << ans[i].second << " ";
//      }
//      cout << endl;
// }





// int main(){
//     int n ; cin >> n ;
//     vector<ll>nums(n);
//     for(int i= 0 ; i< n ; i++){
//           ll p ; cin >> p;
//           nums[i] = p;
//     }
//     solve(nums);

// }


#include<bits/stdc++.h>
using namespace std;
 
int* stockSpan(int *price, int size)  {
        stack<int> s;
        int *output = new int[size];
        s.push(0);
        output[0] = 1;
        for (int i = 1; i < size; i++) {
          while (!s.empty() && price[s.top()] < price[i]) {
            s.pop();
          }
          if (s.empty()) {
            output[i] = i + 1;
          } else {
            output[i] = i - s.top();
          }
          s.push(i);
        }
        return output;
}
 
int main() {
    int n;
    cin >> n;
    int* prices = new int[n];
    for (int i = 0; i < n; i++)
        cin >> prices[i];
    int* spans = new int[n];
    calculateSpan(prices, n, spans);
    for (int i = 0; i < n; i++) cout << spans[i] << " ";
    return 0;
}