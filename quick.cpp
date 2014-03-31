#include <iostream>
#include <cstdlib>
using namespace std;
void exchange(int& a,int& b){
  int tmp;
  tmp = a;
  a = b;
  b = tmp;
}
int partition(int* A,int p,int r){
  int len=r-p+1;
  int key = A[r];
  int i=p-1;
  cout<<"$$$$$$$"<<endl;
  for(int k=p;k<=r;k++){
    cout<<A[k];
  }
  cout<<"$$$$$$"<<endl;
  for(int j=p;j<r;j++){
    if(A[j]<=key){
      i++;
      exchange(A[i],A[j]);
    }
  }
  exchange(A[i+1],A[r]);
//  cout<<"分解为:q="<<i+1<<endl;
 // cout<<"L1:";
 // for(int k=p;k<=i;k++)
  //  cout<<A[k]<<" ";
  //cout<<endl;
  //cout<<"L2:";
  //for(int k=i+2;k<=r;k++){
  //  cout<<A[k];
  //}
  //cout<<endl;
  return i+1;
}
void quick_sort(int* A,int p,int r){
  if(p<r){
    int q = partition(A,p,r);
    cout<<"q = "<<q<<endl;
    quick_sort(A,p,q-1);
    quick_sort(A,q+1,r);
  }
}
int main(){
  int A[]={2,8,7,1,3,5,6,4};
  quick_sort(A,0,7);
  for(int k=0;k<8;k++)
    cout<<A[k]<<"-->";
  cout<<endl;
}
