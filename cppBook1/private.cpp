#include <string>
#include <iostream>
using namespace std;

class Dog
{
    public:
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

void Dog::setAge(int age)              //setter definitions

{
    this -> age = age;
}

void Dog::setWeight(int weight)
{
    this -> weight = weight;
}

void Dog::setColor(string color)
{
    this -> color = color;
}

int Dog::getAge() { return age; }   //getter definitions 
int Dog::getWeight() { return weight; }
string Dog::getColor() { return color; }

void Dog::bark() { cout << "WOOF!\n"; }

int main()                             //main program
{
    Dog Fido;
    Fido.setAge(3);
    Fido.setWeight(15);
    Fido.setColor("black");
    cout << "Fido is "<< Fido.getAge() << " years old\n";
    cout << "Fido weighs "<<Fido.getWeight() << " lbs\n";
    cout << "Fido is a " << Fido.getColor() << "  dog\n";
    return 0;
}