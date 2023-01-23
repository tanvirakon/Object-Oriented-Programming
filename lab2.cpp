#include <bits/stdc++.h>
using namespace std;
class test
{
private:
    int x;
    int y;
    static int z;
public:
    test()
    {
        x=0;
        y=0;
    }

    test(int a,int b)
    {
        x=a;
        y=b;

    }

    test(test &actslikeobj) //copy cons
    {
        x=actslikeobj.x;
        y=actslikeobj.y;
        z++;
    }

    void setdata(int a,int b)
    {
        x=a;
        y=b;
        z++;
    }

    void showz()
    {
        cout<<z<<endl;
    }

    void showall() const
    {
        cout<<"x = "<<x<<endl;
        cout<<"y = "<<y<<endl;
        cout<<"z = "<<z<<endl;
    }
    int getx()
    {
        return x;
    }
    int getz()
    {
        return z;
    }
    int gety()
    {
        return y;
    }
    void show()
    {
        cout<<x<<" "<<y<<endl;
    }

};

int test::z;

int main()
{
//test t;
    test t[5];
    t[1].setdata(15,51);
    t[2].setdata(10,11);
    t[3].setdata(13,150);
    t[4].setdata(20,15);
    t[5].setdata(87,100);
    // test c(t); // here c=x , actslikeobj.x is t

    int sum=0;
    cout<<"total obj created "<<t[5].getz()<<endl;


    for(int i=1; i<=5; i++)
    {
        sum+=t[i].getx();
    }

    cout<<"sum of all x "<<sum<<endl;

    int miny=0;
    int yy;
    for(int i=1; i<=5; i++)
    {
        if(t[i].gety()>miny)
        {
            miny=t[i].gety();
            yy=i;
        }

    }
    cout<<"y value is maximum object number "<<yy<<endl;

}
