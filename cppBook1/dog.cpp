#include "dog.hpp"          //include class header file

int main()
{
    Dog Lady(4, 18, "brown");     //create & initialize
    Dog Fido(3, 15, "black");

    Fido.bark();
    cout << "\tFido is a "<< Fido.getColor() << " dog\n";
    cout << "\tFido is "<< Fido.getAge()<< " years gold ";
    cout << "and weighs "<< Fido.getWeight() << "lbs\n";

    Lady.bark();
    cout << "\tLady is a "<< Lady.getColor() << " dog\n";
    cout << "\tLady is "<< Lady.getAge()<< " years gold ";
    cout << "and weighs "<< Lady.getWeight() << "lbs\n";

    return 0;
};