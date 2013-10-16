#include <iostream>
#include <string>
#include "Animal.h"
#include "Crocodile.h"
using namespace std;
int main(){
  Crocodile c1("No1");
  Crocodile c2('F',"No2");
  cout<<c1.getAge()<<endl;
  cout<<c1.getName()<<endl;
  cout<<c1.getGender()<<endl;
  cout<<c1.getEnergy()<<endl;

  cout<<c2.getAge()<<endl;
  cout<<c2.getName()<<endl;
  cout<<c2.getGender()<<endl;
  cout<<c2.getEnergy()<<endl;
}
