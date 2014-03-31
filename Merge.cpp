#include <iostream>
#include <cstdlib>
using namespace std;
void Merge(int* A,int p,int q,int r){
  int n1 = q-p+1;
  int n2 = r-q;
  int L1[n1],L2[r-q];
  int l1=0;
  for(int n=0;n<q+1;n++){
    L1[l1++] = A[n];
  }
  int l2=0;
  for(int n=q+1;n<r+1;n++){
    L2[l2++] = A[n];
  }
  for(int n=0;n<n1;n++)
    cout<<L1[n]<<" ";
  cout<<endl;
  cout<<"L2:";
  for(int n=0;n<n2;n++)
    cout<<L2[n]<<" ";
  cout<<endl;
  int k=0,i=0,j=0;
  while(i<n1 && j<n2){
    if(L1[i]<L2[j]){
      A[k++] = L1[i++];
    }else{
      A[k++] = L2[j++];
    }
  }
  if(i < n1){
    while(i<n1){
      A[k++] = L1[i++];
    }
  }else if(j<n2){
    while(j<n2){
      A[k++] = L2[j++];
    }
  }

}

void Merge_sort(int* A,int p,int r){
  if(p<r){
    int q = (p+r)/2;
    Merge_sort(A,p,q);
    Merge_sort(A,q+1,r);
    Merge(A,p,q,r);
  }
}

int main(){
  int A[]={2,4,5,7,1,2,3,6};
  Merge(A,0,3,7);
  for(int i=0;i<8;i++){
    cout<<A[i]<<" ";
  }
  cout<<endl;
  return 0;
}

