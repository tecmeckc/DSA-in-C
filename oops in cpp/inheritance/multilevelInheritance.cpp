#include <iostream>
#include <string>
using namespace std;
class person
{
public:
  string name;
  int age;
  person(string name, int age)
  {
    this->name = name;
    this->age = age;
  }
};
class student : public person
{
public:
  int rollNo;
  int semester;
  student(string name, int age, int rollNo, int semester) : person(name, age)
  {
    this->rollNo = rollNo;
    this->semester = semester;
  }
};
class gradSt : public student
{
public:
  string researchArea;
  gradSt(string name, int age, int rollNo, int semester, string researchArea) : student(name, age, rollNo, semester)
  {
    this->researchArea = researchArea;
  }
  void getInfo()
  {
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "Roll number: " << rollNo << endl;
    cout << "Semester: " << semester << endl;
    cout << "Research Area: " << researchArea << endl;
  }
};
int main()
{

  gradSt s1("Avanti Upasani", 19, 110, 3, "Chemical");
  s1.getInfo();
  return 0;
}