#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define fast                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);
#define endl '\n'
#define pb push_back
//Hybrid (Diamond) inheritance [virtual class]
class a
{
private:
    int ax;
public:
    a()
    {
        ax=90;
        cout<<"kire"<<endl;
    }

    int getx()
    {
        return ax;
    }
    ~a()
    {
        cout<<"yo1"<<endl;
    }
};

class b:virtual public a
{
    int bx;
public:
    b()
    {
        bx=1000;
        cout<<"kire mama"<<endl;
    }

    int getxx()
    {
        return bx;
    }

    ~b()
    {
        cout<<"y0o0o44"<<endl;
    }
};

class c:virtual public a
{
    int cx;
public:
    c()
    {
        cx=150;
        cout<<"kire kmn"<<endl;
    }

    int getxxx()
    {
        return cx;
    }

    ~c()
    {
        cout<<"likeaboss"<<endl;
    }
};

class d:public b,public c
{
    int dx;
public:
    d()
    {
        dx=50;
        cout<<"heelo"<<endl;
    }

    int aq(){
    return getx()+getxx()+getxxx()+dx;
    }

    ~d()
    {
        cout<<"aqsw"<<endl;
    }
};

int main()
{
    d bb;
    cout<<bb.aq()<<endl;
}
