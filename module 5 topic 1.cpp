#include <bits/stdc++.h>
using namespace std;

#define fast                      \
 ios_base::sync_with_stdio(0); \
 cin.tie(0);
#define endl '\n'
#define pb push_back
//complete

int main()
{
    int i;
    int ax[5]= {10,20,60,40,30};
    cout<<"enter index:";
    cin>>i;
    try
    {
        if(i>4 || i<0) throw "Out of Range Error" ;
        cout<<"ax["<<i<<"]="<<ax[i]<<endl;
        throw i;
    }

    catch(char const *ex)
    {
        cout<<ex<<endl;
    }
    catch(int a) //receive i
    {
        cout<<a<<endl;
    }
    catch(...)
    {
        cout<<"default error"<<endl;
    }

}
