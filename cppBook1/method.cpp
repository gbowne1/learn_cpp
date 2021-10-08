#include <string>
#include <iostream>
using namespace std;

class Dog
{
    public:
      void bark();
      int age;
      int weight;
      string color;
};

void Dog::bark()
{
    cout << "WOOF!\n";
}

int main ()
{
    Dog Fido;
    Fido.bark();
    return 0;
}