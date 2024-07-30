#include <bits/stdc++.h>
using namespace std;
class Solution {
public:

static bool comp(vector<int>&a , vector<int >&b){
    if(a[0] == b[0]) return a[1] > b[1];
    return a[0] < b[0];
}
    int maxEnvelopes(vector<vector<int>>& e) {
        vector<int>ans;
   int n = e.size();
   sort(e.begin(), e.end() , comp);
    ans.push_back(e[0][1]);
   for(int i = 1 ; i < n ; i++){
    int ht = e[i][1];
    if(ht > ans.back()){
        ans.push_back(ht);
    }
    else {
        auto p = lower_bound(ans.begin(), ans.end(), ht);
        *p = ht;
    }
   }

return ans.size();
    }
};

// void solve(){
//     int  n ; cin >> n ;
//     vector<int>h(n);
//     vector<int>w(n);
//     for(int i = 0 ; i < n  ; i++){
//         int p ; cin>>p;
//         h[i] =p;
//     }
//       for(int i = 0 ; i < n  ; i++){
//         int p ; cin>>p;
//         w[i] =p;
//     }
//    vector<pair<int, int>>vp;
//    for(int i = 0 ; i < n ; i++){
//       vp.push_back({h[i], w[i]});
//    }
//    sort(vp.begin(), vp.end());
//    reverse(vp.begin(), vp.end());
//    int cnt = 1;
// //    for(int i = 0 ; i < n ; i++){
// //     cout << vp[i].first << " "<< vp[i].second  << "            -> ";
// //    }
//    for(int i = 0 ; i < n-1 ;i++){
//     if(vp[i].second > vp[i+1].second){
//         cnt++;
//     }
//    }

// cout << cnt << endl;
// }

int main(){
    int t ; cin >> t;
    while(t--){
      Solution s ;
      int n ; cin >> n ;
    
    }
}