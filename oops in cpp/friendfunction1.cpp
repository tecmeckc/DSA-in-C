#include <iostream>
using namespace std;

class Marks2
{
    int ank2;

public:
    Marks2()
    {
        ank2 = 0;
    }
    void display2()
    {
        cout << "The marks is " << ank2 << endl;
    }
    friend void Add(Marks2 &m2);
};

void Add(Marks2 &m2)
{
    m2.ank2 = m2.ank2 + 111;
}
int main()
{
    // Write C++ code here

    Marks2 M2;
    Add(M2);
    M2.display2();

    return 0;
}