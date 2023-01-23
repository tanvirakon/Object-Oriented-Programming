#include <iostream> 14
using namespace std;
//complete

class A
{
public:
    virtual void Print()=0;

};
class B:public A
{
public:
    void Print()
    {
        cout<<"Inside Print() of class B"<<endl;
    }
};
int main()
{
//    A a;
//    a.Print(); // abstract class r obj create kra jay na

//B b;
//b.Print();

//A a;  // abstract class r obj create kra jay na
//A *p;
//p=&a;
//p->Print();

    B b;
    A *p;
    p=&b;
    p->Print();

}
