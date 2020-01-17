#include <iostream>
#include <string>

using namespace std;

struct dog {
  string name;
  string color;
  string fur;
  int age;
  void printInfo()
  {
    cout << "Printing Info: " << endl;
    cout << "\tName:  " << name << endl;
    cout << "\tColor: " << color << endl;
    cout << "\tFur:   " << fur << endl;
    cout << "\tAge:   " << age << endl;
  }
};

int main(void)
{
  dog fido;
  fido.name = "Fido";
  fido.color = "brown";
  fido.fur = "fuzzy";
  fido.age = 2;
  fido.printInfo();

  return 0;
}

