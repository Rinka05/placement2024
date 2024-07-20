#include<bits/stdc++.h>
using namespace std;

void solve(string s , int k){
    int j = 0 ;
    int maxi = 0;
    set<char>st;
    for(int i = 0 ; i < s.length(); i++){
         if(st.find(s[i]) == st.end()){
            st.insert(s[i]);
         }
         else st.erase(s[j++]);
          if(st.size() <= k){
              maxi = max(maxi , i-j+1);
              }
    }
    cout << maxi << endl;
}


int main(){
    int t ; cin >> t;
    while(t--){
        int k ; cin >> k ;
        string s ; cin >> s;
        solve(s ,k);
    }
}