#include <bits/stdc++.h>
using namespace std;

class Stack{
    public:
      vector<int>v;
      void insert(int p){
        v.push_back(p);
      }
      int pop(){
        if(v.size() !=0){
        int p = v.back();
        v.pop_back();
        return p;
        }
      }
      int top(){
        if(v.size() !=0)
        return v.back();
      }
      int size(){
        return v.size();
      }
      bool empty(){
        if(v.size()==0){
            return true;
        }
        return false;
      }

};

int main(){
     Stack p;
      p.insert(1);
      p.insert(5);
      p.insert(6);
      p.insert(8);
      cout <<"if stack is empty"<< p.empty()<< endl;
      cout << "size of the stack" << p.size()<< endl;
      cout << "top element" << p.top() << endl;
      cout <<"popping the top element"<<  p.pop() << endl;
      cout << "size after popping " << p.size() << endl;
}