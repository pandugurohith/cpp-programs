#include<iostream>
using namespace std;
class bank{
    public:
    int a,b,c;
    bank(){
        cout<<"Welcome to the bank"<<endl;
    }
    ~bank()
    {
        cout<<"Thankyou"<<endl;
    }
    void display()
    {
        cout<<"Enter available amount"<<endl;
        cin>>a;
        cout<<"Enter amount to with draw"<<endl;
        cin>>b;
        c=a-b;
        if(c<0)
        cout<<"Transaction unsuccessful"<<endl;
        else
        {
        cout<<"Transaction successful"<<endl;
        cout<<"Total available amount= "<<c<<endl;
        }
    }
};
int main()
{
    bank user;
    user.display();
}
