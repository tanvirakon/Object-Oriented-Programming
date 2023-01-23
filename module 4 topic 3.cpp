#include<bits/stdc++.h>
using namespace std;
//complete
class A
{

public:
   virtual void Print()
    {
        cout<<"Inside Print() of class A"<<endl;
    }
};

class B: public A
{
public:
    void Print()
    {
        cout<<"Inside Print() of class B"<<endl;
    }
};

class C: public A
{
public:
    void Print()
    {
        cout<<"Inside Print() of class C"<<endl;
    }
};


int main()
{

//only iv te change virtal deyar jnno

//B b;
//
//b.Print(); //function.. derived class r ta call hy..base class ase na
//derived class e call kra func ta na thkle base ta call hto

//B b;
//A *p; // pointer base class r hoy
//p=&b; //direct &B rakha jabe na....obj b create kre, rakha lgbe
//p->Print();  //b asar kotha to?! // A r func r age virtual likhle b ase

C b;
A *p;
p=&b;
p->Print();

}
