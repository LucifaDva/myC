#include <iostream>
#include <cstdlib>
void insertion(int* a){
  int key;
  for(int j=2;j<10;j++){
    key = a[j];
    int i = j-1;
    while(i>=0&&a[i]>key){
      a[i+1] = a[i];
      i--;
    }
    a[i+1] = key;
  }
}
int main(){
  int a[10]={23,43,12,5,6,7,12,45,89,10};
  for(int i=0;i<10;i++){
    std::cout<<a[i]<<" ";
  }
  std::cout<<std::endl;
  insertion(a);
  for(int i=0;i<10;i++){
    std::cout<<a[i]<<" ";
  }
  std::cout<<std::endl;
  return 0;
}
