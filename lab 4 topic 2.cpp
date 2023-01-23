#include<bits/stdc++.h>
using namespace std;


class A
{
private:
    int x;
protected:
    int y=3;
public:
    int z=1;
};

class B:public A
{
public:
//    void getx(){
//        cout<<x<<endl;
//    }

    void gety(){
        cout<<y<<endl;
    }

    void getz(){
        cout<<z<<endl;
    }
};

int main()
{
    B b;
    b.gety();
    b.getz();
    return 0;
}
