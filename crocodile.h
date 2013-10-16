#if !defined(_CROCODILE_H_)
#define _CROCODILE_H_
#include <iostream>
#include <string>
//#include "Animal.h"
using namespace std;
class Animal;

class Crocodile: public Animal{
  char gender;
  int energy;
  bool isDead;

private:
  int MaxAge;

public:
  ~Crocodile(){}
  Crocodile(string name):Animal(name){
    gender='M';
    MaxAge=20;
    energy=10;
    isDead=false;
  }

  Crocodile(char g,string name):Animal(name){
    gender=g;
    MaxAge=20;
    energy=10;
    isDead = false;
  }

  void fight(Crocodile &c);
  Crocodile* breed(Crocodile &c);
  void eat();
  void grow();
  char getGender();
  int getEnergy();
};
char Crocodile::getGender(){
  return gender;
}

int Crocodile::getEnergy(){
  return energy;
}

void Crocodile::fight(Crocodile &c){
  if(this->gender!=c.gender){
    return;
  }
  if(this->energy > c.energy){
    c.isDead = true;
  }else if(this->energy < c.energy){
    this->isDead = true;
  }else if(this->energy == c.energy){
    int judge = rand()%1;
    if(judge==1){
        c.isDead = true;
    }else{
        this->isDead=true;
    }
  }
}

Crocodile* Crocodile::breed(Crocodile &c){
  if(this->gender!=c.gender)
    return new Crocodile("Noname");
  else
    return NULL;
}

void Crocodile::eat(){
  cout<<"Crocodile is eating!"<<endl;
}

#endif
