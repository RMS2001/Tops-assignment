#include<iostream>
using namespace std;

class demo{
    int a,b;
    public:
    void getdata(){
        cout<<"Enter the variables";
        cin>>a>>b;
    }
    friend void maximum(demo r);
};
void maximum(demo r){
    if(r.a>r.b){
        cout<<"A is Maximum"<<endl;
    }
    else{
        cout<<"B is Maximum"<<endl;
    }
}
int main(){
    demo obj;
    obj.getdata();
    maximum(obj);
    return 0;
}