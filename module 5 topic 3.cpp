#include <bits/stdc++.h>
using namespace std;
//complete
int main()
{
    array<int, 6> ax= {10,60,30,70,20};
    cout<<ax.at(2)<<endl;
    cout<<ax.front()<<endl;
    cout<<ax.back()<<endl;
    ax.fill(44);
    if(ax.empty())
    {
        cout<<"empty"<<endl;
    }
    cout<<ax.size()<<endl;
    cout<<ax.max_size()<<endl;
    cout<<ax.begin()<<endl;
    cout<<ax.end()<<endl;



}
