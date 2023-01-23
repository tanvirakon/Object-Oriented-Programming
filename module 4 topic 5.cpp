#include <iostream> 14
using namespace std;

//complete

class A
{
private:
    int x;
public:
    A()
    {
        x=11;
    }
//Prototype of friend functions
    void gets()
    {
        cout<<x<<endl;
    }
    friend void Add(A &a);
    friend void IncX(A &a);
    friend void DecX(A &a);
};
//body of friend functions
void Add(A &a)
{
    a.x=5;
}

void IncX(A &a)
{
    a.x=a.x+10;
}

void DecX(A &a)
{
    a.x=a.x-4;
}

int main()
{
    //call these methods
    A aa;
    aa.gets();
    Add(aa);
    aa.gets();
    IncX(aa);
    aa.gets();
    DecX(aa);
    aa.gets();

}
