#include <bits/stdc++.h>
using namespace std;
//complete
template<typename a, typename b>
class A
{
private:
    a x;
    b y;
public:
    void setData(a x,b y)
    {
        this->x=x; //2ta x tai...
        this->y=y;
    }
    b Sum()
    {
        b s;
        s=x+y;
        return s;
    }
};

int main()
{

//A<int , int> aa;
//aa.setData(5,6);
//cout<<aa.Sum()<<endl;

    A<int, double> aa;
    aa.setData(5,6.5);
    cout<<aa.Sum()<<endl;
}
