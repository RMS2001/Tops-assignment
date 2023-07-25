#include<iostream>
using namespace std;
class demo{
    public:
    int a,b,c;
    inline void multi(){
        cout<<"Enter the value of A:";
        cin>>a;
        cout<<"Enter the value of B:";
        cin>>b;
        cout<<"MULTILICATION:"<<a*b<<endl;

    }
    inline void cube(){
         cout<<"Enter the value of integer:";
        cin>>c;
        cout<<"CUBIC VALUE :"<<c*c*c;

    }
};
int main(){
    demo obj;
    obj.multi();
    obj.cube();
}