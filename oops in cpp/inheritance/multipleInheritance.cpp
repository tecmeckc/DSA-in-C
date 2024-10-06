#include <iostream>
#include <string>
using namespace std;
class A
{
public:
  string carname;
  float price;
};
class B
{
public:
  string color;
  string company;
};
class C : public A, public B
{
public:
  void getInfo()
  {
    cout << "Name of the car: " << carname << endl;
    cout << "Price of the car: " << price << endl;
    cout << "Color of the car: " << color << endl;
    cout << "Company of the car: " << company << endl;
  }
};
int main()
{
  // Write C++ code here
  C car1;
  car1.carname = "Hyundai Venue";
  car1.price = 7.94;
  car1.color = "Blue";
  car1.company = "Hyundai";
  car1.getInfo();
  return 0;
}