#include <string>
#include <iostream>
using namespace std;

class Dog
{
  public:
    //inline constructor and destructor
    Dog(int initAge, int initWeight, string initColor)
    {
      age = initAge;
      weight = initWeight;
      color = initColor;
    }
    ~Dog() { }
  
    //inline setters & inline constant getters
    void setAge(int yrs) { age = yrs; }
    void setWeight(int lbs) { weight = lbs; }
    void setColor(string clr) { color = clr; }
    int getAge() const { return age; }
    int getWeight() const{ return weight; }
    string getColor() const{ return color; }
  
    void bark() const { cout << "WOOF!\n"; }
  private:
    int age;
    int weight;
    string color;
};