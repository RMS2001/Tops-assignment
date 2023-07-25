#include<iostream>
using namespace std;

class calsi
{
    public:
    int a,b,c;
    char d;
    calsi()
    {
        cout<<"Enter your intrger for A = ";
        cin>>a;
        cout<<"Enter your integer for B = ";
        cin>>b;
        cout<<"Enter sign of calculation : ";
        cin>>d;
    }
    void calcu()
    {
        if(d =='+')
        { 
            c=a+b;
            cout<<c;
        }
        else if(d=='-')
        {
            c=a-b;
            cout<<c;
        }
        else if(d=='*')
        {
            c=a*b;
            cout<<c;
        }
        else if(d== '/')
        {
            c=a/b;
            cout<<c;
        }
    }

};
int main()
{
    calsi obj;
    obj.calcu();
}
