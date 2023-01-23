#include<bits/stdc++.h>
using namespace std;

class father
{
private:
    int money=10;
protected:
    int gold=20;
public:
    int land=30;

};


class son:protected father
{
public:
//        int get_money()
//    {
//        return money;
//    }
    int get_gold()
    {
        cout<<gold<<endl;
    }
    int get_land()
    {
        cout<<land<<endl;
    }
};


class grandson:public son
{
public:
//    int get_money1()
//    {
//        return money;
//    }
    int get_gold1()
    {
        cout<<gold<<endl;
    }
    int get_land1()
    {
        cout<<land<<endl;
    }
};

int main()
{
    son s1;
    s1.get_land();
    s1.get_gold();


    grandson s2;
    s2.get_land1();
    s2.get_gold1();
//
}
