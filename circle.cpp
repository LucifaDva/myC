#include <iostream>
#include "circle.h"
using namespace std;
int main(){
  CirList<int> jos;

  for(int i=1;i<=15;i++){
    jos.AddTail(i);
  }
  jos.SetBegin();

  int length = jos.GetCount();
  for(int i=1;i<length;i++){
    for(int j=0;j<3;j++){
      jos.GetNext();
    }
    jos.RemoveThis();
  }
  cout<<"剩下的序号是："<<jos.GetNext()<<endl;
}
