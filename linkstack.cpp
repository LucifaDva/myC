#include <iostream>
#include <cstdlib>
#include <cassert>
using namespace std;
template <class T> class StackNode{
public:
  T data;
  StackNode<T>* link;
public:
  StackNode():link(NULL){}
  StackNode(T& value):data(value),link(NULL){}
  T& Getdata(){ return data; }
  StackNode<T>* Getlink(){ return link; }
  void Setdata(T& newdata){ data=newdata; }
  void Setlink(StackNode<T>* newlink){ link=newlink;}
};
template <class T> class Stack{
  StackNode<T>* top;
public:
  Stack():top(NULL){}
  void push(T& value){
    StackNode<T>* add = new StackNode<T>(value);
    add->Setlink(top);
    top = add;
  }
  T pop(){
    assert(!IsEmpty());
    StackNode<T>* del = top;
    int data = del->Getdata();
    top = top->Getlink();
    delete del;
    return data;
  }
  bool IsEmpty(){
    if(top==NULL){
      return true;
    }else{
      return false;
    }
  }
};

int main(){
  Stack<int> s;
  int a=5,b=3,c=8;
  s.push(a);
  s.push(b);
  s.push(c);
  cout<<s.pop()<<endl;
}
