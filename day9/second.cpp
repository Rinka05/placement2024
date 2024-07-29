#include <bits/stdc++.h>
using namespace std;

void solve(){
    int  n ; cin >> n ;
    vector<int>h(n);
    vector<int>w(n);
    for(int i = 0 ; i < n  ; i++){
        int p ; cin>>p;
        h[i] =p;
    }
      for(int i = 0 ; i < n  ; i++){
        int p ; cin>>p;
        w[i] =p;
    }
   vector<pair<int, int>>vp;
   for(int i = 0 ; i < n ; i++){
      vp.push_back({h[i], w[i]});
   }
   sort(vp.begin(), vp.end());
   reverse(vp.begin(), vp.end());
   int cnt = 1;
//    for(int i = 0 ; i < n ; i++){
//     cout << vp[i].first << " "<< vp[i].second  << "            -> ";
//    }
   for(int i = 0 ; i < n-1 ;i++){
    if(vp[i].second > vp[i+1].second){
        cnt++;
    }
   }

cout << cnt << endl;


}

int main(){
    int t ; cin >> t;
    while(t--){
       solve();
    }
}