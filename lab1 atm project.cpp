#include <bits/stdc++.h>
using namespace std;
class Account
{
private:
    int age;
    int balance;
    string name;
    int account_no;
public:
    void newacc();
    void closeacc();
    void deposit();
    void withdraw();
    void checkbalance();
    void transferbalance();
    int search(int);
};

void Account:: newacc()
{
    cout << "your name please-" << endl;
    cin >> name;
    cout << "your age please-" << endl;
    cin >> age;
    cout << "your account no" << endl;
    cin >> account_no;
    cout << "your primary balance please-" << endl;
    cin >> balance;
    cout << "\taccount created succesfully!" << endl;
}
void Account::closeacc()
{
    if(balance!=0) cout<<endl<<"  sorry your acc cant be deleted despite having "<<balance<<" taka balance"<<endl;
    else
    {
        cout<<"your acc delated successfully !!"<<endl;
        age=0;
        balance=0;
        name="";
        account_no=0;
    }
}
void Account::deposit()
{
    int amount;
    cout << "Enter amount to deposit: " << endl;
    cin >> amount;
    balance = balance + amount;
    cout << "\t Availabe balance = " << balance << endl;
}

void Account::withdraw()
{
    int amount;
    cout << "Enter amount to withdraw: " << endl;
    cin >> amount;
    balance = balance - amount;
    cout << "\t Availabe balance = " << balance << endl;
}

void Account::checkbalance()
{
    cout<<"\tyour balance is "<<balance<<" taka"<<endl;
}

int Account::search(int k)
{
    if(k==account_no) return 1;
    else return 0;
}

int main()
{
    int n=2;
    Account b[n];
    int p=0,acc_num,found;
    while(1)
    {
        int option;
        cout<<endl<<"########## main menu ########"<<endl;
        cout<<"1. create new acc"<<endl;
        cout<<"2. close old acc"<<endl;
        cout<<"3. deposit money"<<endl;
        cout<<"4. withdraw money"<<endl;
        cout<<"5. check balance\n 7.exit\n"<<endl;
        cout<<" enter any between (1-6)_ ";
        cin>>option;
        if(option==6) break;
        switch(option)
        {
        case 1:
        {
            string pass;
            cout<<"enter admin pass"<<endl;
            cin>>pass;
            if(pass=="admin")
            {
                for(int i=p; i<n; i++)
                {
                    b[i].newacc();
                    p=i+1;
                    break;
                }
            }
            else cout<<"\tinvalid admin pass"<<endl;
        }
        break;
        case 2:
        {
            string pass;
            cout<<"enter admin pass"<<endl;
            cin>>pass;
            int flag=0;
            if(pass=="admin")
            {
                cout<<"enter account no"<<endl;
                cin>>acc_num;

                for(int i=0; i<n; i++)
                {
                    found=b[i].search(acc_num);
                    if(found)
                    {
                        b[i].closeacc();
                        flag=1;
                        break;
                    }
                }
                if(flag==0) cout<<"\tinvalid acc"<<endl;
            }
            else cout<<"\tinvalid admin pass"<<endl;
        }
        break;case 3:
        {
            cout<<"enter account no"<<endl;
            cin>>acc_num;
            int flag=0;
            for(int i=0; i<n; i++)
            {
                found=b[i].search(acc_num);
                if(found)
                {
                    b[i].deposit();
                    flag=1;
                    break;
                }
            }
            if(flag==0) cout<<"\tinvalid acc"<<endl;
            break;
        }
        case 4:
        {
            cout<<"enter account no"<<endl;
            cin>>acc_num;
            int flag=0;
            for(int i=0; i<n; i++)
            {
                found=b[i].search(acc_num);
                if(found)
                {
                    b[i].withdraw();
                    flag=1;
                    break;
                }
            }
            if(flag==0) cout<<"\tinvalid acc"<<endl;
            break;
        }
case 5:
        {
            cout<<"enter account no"<<endl;
            cin>>acc_num;
            int flag=0;
            for(int i=0; i<n; i++)
            {
                found=b[i].search(acc_num);
                if(found)
                {
                    b[i].checkbalance();
                    flag=1;
                    break;  }
            }
            if(flag==0) cout<<"\tinvalid acc"<<endl;
            break;
        }
        }
    }
}
