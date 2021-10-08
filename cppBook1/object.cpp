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

int main()
{
    Dog Fido;
    Fido.age = 3;
    Fido.age = 15;
    Fido.color = "black";
    cout << "Fido is " << Fido.age << " years old\n";
    cout << "Fido weighs " << Fido.weight << " lbs\n";
    cout << "Fido is a " << Fido.color << " dog\n";
    return 0;
}