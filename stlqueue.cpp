#include <iostream>
#include <cstdlib>
#include <string>
#include <queue>
#include <fstream>
using namespace std;
int main(){
  ifstream inf;
  inf.open("1.txt");
  if(!inf){
    cerr<<"Can not open file!"<<endl;
    exit(1);
  }
  queue<string> myque;
  string line;
  while(getline(inf,line)){
    myque.push(line);
  }
  while(!myque.empty()){
    cout<<"Front:"<<myque.front()<<endl;
    cout<<"Back:"<<myque.back()<<endl;
    myque.pop();
    cout<<"After Front:"<<myque.front()<<endl;
    cout<<"After Back:"<<myque.back()<<endl;
  }
  return 0;
}
