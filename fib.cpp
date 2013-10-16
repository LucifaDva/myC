#include <iostream>
using namespace std;
int Fib(int n){
  if(n<=1){
    return n;
  }
  int twoback=0;
  int oneback=1;
  int Current;
  for(int i=2;i<=n;i++){
    Current = twoback + oneback;
    twoback = oneback;
    oneback = Current;
  }
  return Current;
}

int main(){
    int num;
    cin>>num;
    cout<<Fib(num)<<endl;

  return 0;
}
