#include <iostream>
#include <cstdlib>
#include <cassert>
using namespace std;
class Stack{
  int S[100];
  int top;
public:
  Stack():top(0){}
  void push(int value){
    top = top+1;
    S[top] = value;
  }
  int pop(){
    int data = S[top];
    top = top-1;
    return data;
  }
  bool isEmpty(){
    if(top==0){
      return true;
    }else{
      return false;
    }
  }
};
int main(){
  Stack s;
  s.push(3);
  s.push(5);
  cout<<s.pop()<<endl;
  return 0;
}
