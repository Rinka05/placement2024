#include <bits/stdc++.h>
using namespace std;



int main(){
    int t ; cin >> t ;
    while(t--){
        int n ; cin >> n ;
        int p = 2*n;
          long long sum = 0;
         while(p--){
            int a , b ; cin >> a >> b;
            sum += min(a , b);
         }
         cout << sum << endl;

    }
}