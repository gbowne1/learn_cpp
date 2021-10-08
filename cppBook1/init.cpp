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
