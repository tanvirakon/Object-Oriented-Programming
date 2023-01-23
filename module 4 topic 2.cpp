#include <bits/stdc++.h>
#define ll long long
using namespace std;

class Circuit
{
private:
    double real;
    double img;

public:
    Circuit(double a,double b)
    {
        real=a;
        img=b;
    }
    Circuit operator+(Circuit const& obj)
    {
        Circuit res(0,0);
        res.real = real + obj.real;
        res.img = img + obj.img;
        //cout <<obj.real<<" "<< obj.img<<endl;
        return res;
    }
    Circuit operator*(Circuit const& obj)
    {
        Circuit res(0,0);
        res.real = real * obj.real- img*obj.img;
        res.img = img*obj.real + real*obj.img;
        return res;
    }
    Circuit operator/(Circuit const& obj)
    {
        Circuit res(0,0);
        res.real = (real * obj.real+ img*obj.img)/(obj.real*obj.real+ obj.img*obj.img);
        res.img = (img*obj.real - real*obj.img)/(obj.real*obj.real+ obj.img*obj.img);
        return res;
    }
    void print()
    {
        cout << real <<" "<< img<<"j"<< endl;
    }
};
int main()
{
    Circuit c1(3,4),c2(4,-3),c3(1,6),c4(100,50);
    Circuit c5= ((c1*c2)+(c2*c3)+(c1*c3))*c4;
    Circuit c6= c5/((c1*c2)*c3);
    //c5.print();
    c6.print();
    return 0;
}
