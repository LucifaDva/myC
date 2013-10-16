#include <iostream>
#include <fstream>
using namespace std;
#define num 10
ofstream f("out.txt");
void move(int n,char x,char y){
  f<<"Move "<<n<<"from "<<x<<"to "<<y<<endl;
}
void hano(int n,char a,char b,char c){
  if(n==1){
    move(1,a,c);
  }
  else{
    hano(n-1,a,c,b);
    move(n,a,c);
    hano(n-1,b,a,c);
  }
}
int main(){
  f<<"The sulution is"<<num<<endl;
  hano(num,'a','b','c');
  f.close();
  f<<"The End!!"<<endl;

  return 0;
}
