#include<iostream>
using namespace std;

class maths{
    public:
    void cal(int a,int b){
        cout<<"ADDITON"<<endl;
        cout<<"ADDITION:"<<a+b<<endl;
    }
    void cal(double a, double b){
        cout<<"SUNSTRACTION"<<endl;
       
        cout<<"SUBSTRACTION:"<<a-b<<endl;

    }
    void cal(float a,float b,float c){
        cout<<"DIVISION"<<endl;
        c=a/b;
        cout<<"DIV:"<<c<<endl;
    }
    
    void cal(int a,int b,int c){
         cout<<"MULTIPLICATION"<<endl;
        c=a*b;
        cout<<"MULTIPLICATION:"<<c;
        
    }
};
int main(){
    maths obj;
    obj.cal(10,20);
    obj.cal(20.00,10.00);
    float division_result;
    obj.cal(20.00,1.00,division_result);
    obj.cal(10,20,0);
}