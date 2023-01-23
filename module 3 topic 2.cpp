#include <bits/stdc++.h>
using namespace std;
//Hybrid (Diamond) inheritance [virtual class]
class A
{
    int x;
protected:
    int y;
public:
    int z;
};

class B:virtual public A
{
//private:
//    int p;
//protected:
//    int q;
//public:
//    int r;
//public:
//    void getx()
//    {
//        cout<<y<<endl;
//    }

};

class C:virtual public A
{
//public:
//    void getx()
//    {
//        cout<<y<<endl;
//    }
};

class D: public B, public C{
public:
    void getx()
    {
        cout<<y<<endl;
    }
};

int main()
{
    D b;

    b.getx();


}
