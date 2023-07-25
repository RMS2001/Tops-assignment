#include<iostream>
using namespace std;

class swapping{
    int a,b;
    public:
    void getinfo(){
        a=10;
        b=20;
        cout<<"BEFORE SWAPPING"<<endl;
        cout<<"A="<<a<<endl;
        cout<<"B="<<b<<endl;
    }
    friend void swap(swapping d);
    
};
 void swap(swapping d){

    d.a=d.a+d.b;
    d.b=d.a-d.b;
    d.a=d.a-d.b;
    
    cout<<"AFTER SWAPPING"<<endl;
    cout<<"A="<<d.a<<endl;
    cout<<"B="<<d.b<<endl;
}
int main(){
    swapping obj;
    obj.getinfo();
    swap(obj);
    return 0;
}