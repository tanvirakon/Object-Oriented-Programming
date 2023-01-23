#include <bits/stdc++.h>
using namespace std;
//incom
int main()
{
    list<int>li;
    for(int i=0; i<8; i++) li.push_back(i+2);
    li.push_front(10);
    li.push_front(15);
//for(auto i:li) cout<<i<<endl; //emne chay nai
    for(auto it= li.begin(); it!=li.end(); it++)
        cout << *it<<" ";

    cout<<endl;
    for (auto it = li.rbegin(); it != li.rend(); ++it)
        cout << *it << " ";
    cout<<endl<<li.front();
    cout<<endl<<li.back();
    li.pop_back();
    // cout<<endl<<li.back(); 9 nai ekhn r pop krr pore
    li.pop_front();
//   int kk=li.find(15)<<endl;
//cout<<kk;
    int cc=0,x=5;
    for(auto i:li) if(i==x) cc++;
    cout<<endl;
    cout<<cc<<endl;






}
