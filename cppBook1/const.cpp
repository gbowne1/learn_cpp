
#include <string>
#include <iostream>
using namespace std;

class Dog
{
    public:
      //constructor
      Dog(int initAge, int initWeight, string initColor);

      ~Dog();

      void setAge(int age);
      void setWeight(int weight);
      void setColor(string color);

      int getAge() const;
      int getWeight() const;
      string getColor() const;

      //automatically inline constant method
      void bark() const { cout << "WOOF!\n"; };

    private:
      int age;
      int weight;
      string color;
};

//constructor definition
Dog::Dog(int initAge, int initWeight, string initColor)
{
  age = initAge;
  weight = initAge;
  color = initColor;
}

//destructor definition
Dog::~Dog(){ }

//inline setter definition
inline void Dog::setAge(int yrs) { age = yrs; }
inline void Dog::setWeight(int lbs) { weight = lbs; }
inline void Dog::setColor(string clr) { color = clr; }

//inline constant getter definitions
inline int Dog::getAge() const { return age; }
inline int Dog::getWeight() const { return weight; }
inline string Dog::getColor() const { return color; }

//main program
int main()
{
    Dog Lady(4, 18, "brown");
    Dog Fido(3, 15, "black");

    cout << "Fido is a " << Fido.getColor() << " dog\n";
    cout << "Lady is " << Lady.getAge()<< " years old\n";
    cout << "Lady weighs " <<Lady.getWeight()<< " lbs\n";
    cout << "Lady is a " << Lady.getColor() << " dog\n";
    return 0;


}