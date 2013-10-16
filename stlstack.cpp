#include <iostream>
#include <string>
#include <cstdlib>
#include <stack>
using namespace std;
int main(){
  stack<int> mystack;
  int num;
  cout<<"Num"<<endl;
  cin>>num;
  int n;
  for(int i=0;i<num;i++){
    cout<<"Input n"<<endl;
    cin>>n;
    mystack.push(n);
  }
  for(int i=0;i<num;i++){
    cout<<mystack.top()<<endl;
    mystack.pop();
  }
  cout<<mystack.empty()<<endl;
  return 0;
}
