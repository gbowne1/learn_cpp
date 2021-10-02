#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector <int> vec(3,100);
    cout << "Vector size is " << vec.size() << endl;
    vec.push_back(7); vec.push_back(8); vec.push_back(9);
    cout << "\t3 elements added"  << endl;
    cout << "Vector size is now " << vec.size() << endl;
    cout << "\tFirst element is "<< vec.at(1)   << endl;
    cout << "\tSecond element is "<< vec.at(1)  << endl;
    cout << "\tLast element is " << vec.back()  << endl;
    vec.pop_back();
    cout << "\tLast element removed" << endl;
    cout << "\tLast element is now " <<vec.back() <<endl;
    cout << "Vector size is now "    <<vec.size() <<endl;
    cout << "Is vector empty?: "     <<vec.empty()<<endl;
    vec.clear();
    cout << "\tVector cleared"       << endl;
    cout << "Vector size is now " << vec.size() << endl; 
    cout << "Is vector empty?: " << vec.empty() << endl; 
    return 0;
 }