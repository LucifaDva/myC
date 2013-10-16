#include <iostream>
#include <cstdlib>
#include <queue>
using namespace std;
class Compare{
public:
  bool operator()(const int&a ,const int& b){
    return a>b;
  }
};

int main(){
  priority_queue<int,vector<int>,Compare> q;
  q.push(1);
  q.push(5);
  q.push(2);
  q.push(4);
  q.push(6);
  q.push(3);
  int size = q.size();
  for(int i=0;i<size;i++){
    cout<<q.top()<<endl;
    q.pop();
  }
  return 0;
}
