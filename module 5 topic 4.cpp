#include <bits/stdc++.h>
using namespace std;
//complete
int main()
{
    pair<int,string>px;
    pair<int,string>bx= {100,"dhaka"};
    px=make_pair(10,"rajshahi");
    cout<<px.first<<endl;
    cout<<px.second<<endl;
    get<0>(px)=20;
    cout<<px.first<<endl;

    cout<<bx.first<<endl;

    swap(bx,px);
    cout<<bx.first<<endl; //bx e ekhn px r value

}
