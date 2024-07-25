#include <bits/stdc++.h>
using namespace std;
bool solve(string s){
    stack<char>st;
    for(int i = 0 ; i< s.length(); i++){
        char c = s[i];
        if(c == '(' || c == '{' || c == '['){
            st.push(c);
        }
       else {
        if (!st.empty() && ((c == ')' &&st.top() == '(') || ( c == '}' &&st.top() == '{') ||(c == ']' && st.top() =='['))){
            st.pop();
        }
        else {
           return false;
        }
        }
    }
    if(st.empty()){
       return true;
    }
    else return false;
}

int main(){
    string s ; cin >> s ;
  cout <<  solve(s);
}