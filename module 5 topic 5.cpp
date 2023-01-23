#include <bits/stdc++.h>
using namespace std;
//complete
int main()
{
    tuple<int,string,double>tx;
    tuple<int,string,double>bx;
    tx=make_tuple(100,"Kamal",3.5);
    bx=make_tuple(951,"rahim",4.00);
    cout<<get<0>(tx)<<endl;
    cout<<get<1>(tx)<<endl;
    cout<<get<2>(tx)<<endl;
    get<2>(tx)=3.7;
//cout<<get<2>(tx)<<endl;
    swap(bx,tx);
    cout<<get<2>(bx)<<endl;



}
