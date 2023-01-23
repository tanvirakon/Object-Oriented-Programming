#include <bits/stdc++.h>
using namespace std;
//complete

int main()
{

    stack<int>st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);

    st.pop();//40 pop hye jabe

    cout<<st.top()<<endl;//displays top  element

    if(st.empty())
    {
        cout<<"empty"<<endl;
    }

    else      cout<<"not empty"<<endl;



}
