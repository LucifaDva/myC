#include <iostream>
#include <string>
#include <stack>
#include <cstdlib>
#include <fstream>
using namespace std;
int main(){
  ifstream inf;
  inf.open("1.txt");
  if(!inf){
    cerr<<"Cannot open file for input!"<<endl;
    return EXIT_FAILURE;
  }
  stack<string> s;
  string line;
  while(getline(inf,line)){
    s.push(line);
  }
  inf.close();
  while(!s.empty()){
    cout<<s.top()<<endl;
    s.pop();
  }
}
