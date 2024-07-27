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
#include<bits/stdc++.h>
using namespace std;
class StackUsingArray {
	int *data;
	int nextIndex;
	int capacity;	

	public :

	StackUsingArray(int totalSize) {
		data = new int[totalSize];
		nextIndex = 0;
		capacity = totalSize;
	}

	// return the number of elements present in my stack
	int size() {
		return nextIndex;
	}

	bool isEmpty() {
		/*
		if(nextIndex == 0) {
			return true;
		}
		else {
			return false;
		}
		*/

		return nextIndex == 0;
	}

	// insert element
	void push(int element) {
		if(nextIndex == capacity) {
			cout << "Stack full " << endl;
			return;
		}
		data[nextIndex] = element;
		nextIndex++;
	}

	// delete element
	int pop() {
		if(isEmpty()) {
			cout << "Stack is empty " << endl;
			return INT_MIN;	
		}
		nextIndex--;
		return data[nextIndex];
	}

	int top() {
		if(isEmpty()) {
			cout << "Stack is empty " << endl;
			return INT_MIN;	
		}
		return data[nextIndex - 1];
	}





int main() {
	StackUsingArray s(4);
	s.push(10);
	s.push(20);
	s.push(30);
	s.push(40);
	s.push(50);


	cout << s.top() << endl;

	cout << s.pop() << endl;
	cout << s.pop() << endl;
	cout << s.pop() << endl;

	cout << s.size() << endl;

	cout << s.isEmpty() << endl;

}
};
// int main(){
//      Stack p;
//       p.insert(1);
//       p.insert(5);
//       p.insert(6);
//       p.insert(8);
//       cout <<"if stack is empty"<< p.empty()<< endl;
//       cout << "size of the stack" << p.size()<< endl;
//       cout << "top element" << p.top() << endl;
//       cout <<"popping the top element"<<  p.pop() << endl;
//       cout << "size after popping " << p.size() << endl;
// }