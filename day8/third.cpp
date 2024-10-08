#include <bits/stdc++.h>
using namespace std;

#include <string>
using namespace std;
void printAllPossibleCodesHelper(string input, string output){ 
    if(input[0] == '\0'){
        cout << output << endl;
        return; 
        
    } 
    
    int num = input[0] - 48; 
    char ch = num - 1 + 'a';
    printAllPossibleCodesHelper(input.substr(1), output + ch);
    if(input[1] != '\0'){ 
        num = num * 10 + input[1] - 48;
        ch = num - 1 + 'a';
        if(num >= 10 && num <= 26){
            printAllPossibleCodesHelper(input.substr(2), output + ch);
        }
    }
}
            
void printAllPossibleCodes(string input) {
    printAllPossibleCodesHelper(input, "");
}
int main(){
    string s ; cin >> s;
    printAllPossibleCodes(s);
}