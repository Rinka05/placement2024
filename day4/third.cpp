#include<bits/stdc++.h>
using namespace std;




int main(){
    int t  ; cin >> t ;
    while(t--){
        int n  , k ; cin >> n >> k;
        vector<int>v(n);
        for(int i = 0 ; i < n ; i++){
            int x ; cin >>x;
            v[i] = x;
        }
        set<int>ans;
        sort(v.begin(), v.end());
         for(int i = 0 ; i < n ; i++){
        for(int j = 1 ; j < k ; j++){
               ans.insert(v[i]*j);
        }
         }
         vector<int>m;
          m.insert(m.end(), ans.begin(), ans.end());
         sort(m.begin(), m.end());
       
             cout << m[k-1] << endl;
    }
    
}