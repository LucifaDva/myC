#include <stdio.h>
#include <vector>
#include <iostream>
using namespace std;
int bS(const vector<int> &a,const int& x,int low,int high){
  if(low>high){
    return -1;
  }
  int mid = (low+high)/2;
  if(a[mid]<x){
    return bS(a,x,mid+1,high);
  }else if(a[mid]>x){
    return bS(a,x,low,mid-1);
  }else{
    return mid;
  }
}
int search(const vector<int> &a,const int& x){
  return bS(a,x,0,a.size()-1);
}

int main(){
  vector<int> b;
  b.push_back(1);
  b.push_back(4);
  b.push_back(6);
  b.push_back(7);
  b.push_back(8);
  b.push_back(10);
  b.push_back(13);
  b.push_back(21);
  b.push_back(22);
  b.push_back(30);
  const int value=22;
  int result = search(b,value);
  if(result==-1){
    cout<<"不存在！"<<endl;
   }else{
    cout<<value<<"位置为："<<result<<endl;
  }
}
