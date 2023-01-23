#include <bits/stdc++.h>
using namespace std;
//complete
int main()
{
    queue<int>qu;
    qu.push(10);
    qu.push(20);
    qu.push(30);
    qu.push(40);

    qu.pop();//10 pop hye gse

    cout<<qu.front()<<endl;
    cout<<qu.back()<<endl;
    if(qu.empty()) cout<<"empty"<<endl;
    else cout<<"not empty"<<endl;

}
