#include <iostream>
#include <cstdlib>
using namespace std;
void exchange(int&,int&);
void Max_heapify(int* A,int i,int heap_len){
  int l = 2*i+1;
  int r = 2*(i)+2;
  int largest;
  if(l<heap_len && A[l]>A[i]) {
    largest = l;
  }else{
    largest = i;
  }
  if(r<heap_len && A[r] > A[largest]){
    largest = r;
  }
  if(largest != i){
    exchange(A[i],A[largest]);
    Max_heapify(A,largest,heap_len);
  }
}
void build_max_heap(int* A,int heap_len){
  for(int i=(heap_len)/2+1;i>=0;i--){
    Max_heapify(A,i,heap_len);
  }
}
void exchange(int& a,int& b){
  int tmp;
  tmp = a;
  a = b;
  b = tmp;
}
void heap_sort(int* A,int heap_len){
  build_max_heap(A,heap_len);
  for(int i=heap_len-1;i>=0;i--){
    cout<<A[0]<<endl;
    exchange(A[0],A[i]);
    heap_len--;
    Max_heapify(A,0,heap_len);
  }
}
int main(){
  int A[]={4,1,3,2,16,9,10,14,8,7};
  heap_sort(A,sizeof(A)/sizeof(A[0]));
  return 0;
}
