#include <string>
#include <iostream>
using namespace std;

class Dog
{
    public:
    //constructor
    Dog(int intAge, int initWeight, string initColor);
      
      ~Dog();

      void setAge(int age);
      void setWeight(int weight);
      void setColor(string color);
      int getAge();
      int getWeight();
      string getColor();
      void bark();

    private:
       int age;
       int weight;
       string color;
};
//construction definition
Dog::Dog(int initAge, int initWeight, string initColor)
{
    age = initAge;
    weight = initWeight;
    color = initColor;
}

//destructor definition
Dog::~Dog(){ }

//setter definititions
void Dog::setAge(int yrs) { age = yrs; }
void Dog::setWeight(int lbs) { weight = lbs; }
void Dog::setColor(string clr) { color = clr; }

//getter definitions
int Dog::getAge() { return age; }
int Dog::getWeight() { return weight; }
string Dog::getColor() { return color; }

//class method definition
void Dog::bark() { cout << "WOOF!\n"; }

//main program
int main()
{
    Dog Fido(3, 15, "black");//create a initialize object
    cout << "Fido is " <<Fido.getAge() << " years old\n";
    cout << "Fido weighs "<<Fido.getWeight() << " lbs\n";
    cout << "Fido is " << Fido.getColor() << " dog\n";
}