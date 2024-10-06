#include <iostream>
using namespace std;
class Number2;
class Number1
{
  int a;

public:
  void setNum1(int num1)
  {
    a = num1;
  }
  friend void max(Number1, Number2);
};
class Number2
{
  int b;

public:
  void setNum2(int num2)
  {
    b = num2;
  }
  friend void max(Number1, Number2);
};
void max(Number1 n1, Number2 n2)
{
  if (n1.a > n2.b)
  {
    cout << n1.a << " i.e N1 is greater" << endl;
  }
  else
  {
    cout << n2.b << " i.e N2 is greater" << endl;
  }
}
int main()
{
  // Write C++ code here
  Number1 N1;
  Number2 N2;
  N1.setNum1(100);
  N2.setNum2(200);
  max(N1, N2);

  return 0;
}