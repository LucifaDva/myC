using namespace std;
class Animal{

private:
  int age;
  string name;
  int position[2];
  int minEnergyLevel;
  int maxEnergyLevel;

protected:
  void setAge(int newAge);
  void setMaxEnergyLevel(int newMaxEnergy);
  void setMinEnergyLevel(int newMinEnergy);
//  friend void fun(Animal &a);
 // friend ostream & operator<<(ostream &os,Animal &a);

public:
  int getAge();
  string getName();
  void setName(string newName);
//  int *getPosition();
  int getmax();
  int getmin();
 // void move(int newPosition[2]);
  void eat();
  Animal(string name):age(1),minEnergyLevel(5),maxEnergyLevel(100),name(name){
    position[0]=0;
    position[1]=1;
    cout<<"Name="<<name<<endl;
  }
  ~Animal(){
    cout<<name<<"die!"<<endl;
  }
  Animal & operator+(Animal &a){
    age += a.age;
    minEnergyLevel += a.minEnergyLevel;
    maxEnergyLevel += a.maxEnergyLevel;
    cout<<"sumage="<<age<<"summin="<<minEnergyLevel<<endl;
    return *this;
  }
};
int Animal::getAge(){
  return age;
}
string Animal::getName(){
  return name;
}
void Animal::setName(string newName){
  name=newName;
}
int Animal::getmax(){
  return maxEnergyLevel;
}
int Animal::getmin(){
  return minEnergyLevel;
}
void Animal::eat(){
  cout<<"Eating!"<<endl;
}
/*
ostream & operator<<(ostream &os,Animal &a){
  os<<a.name<<endl;
  os<<a.age<<endl;
  os<<a.maxEnergyLevel<<endl;
  os<<a.position[0]<<" "<<a.position[1]<<endl;
  return os;
};
void fun(Animal &a){
  cout<<a.age<<endl;
  cout<<a.name<<endl;
  cout<<a.position[0]<<" "<<a.position[1]<<endl;*/
