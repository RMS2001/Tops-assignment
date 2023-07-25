#include<iostream>
#include<string>
using namespace std;

class person{
    public:
    string name;
    int age;
   void printdata1(){
    cout<<"--------Student Details--------"<<endl;
    cout<<"Student Name:"<<name<<endl;
    cout<<"Student age:"<<age<<endl;
   }
   
};
class student{
    public:
    int persantage;
    void printdata2(){
        cout<<"-----Persantage of student------"<<endl;
        cout<<persantage<<endl;
    }
};
class teacher:public person,public student{
    public:
    string teachername;
    int salary;
    void getdata1(){
    cout<<"Name:";
    cin>>name;
    cout<<"Enter age:";
    cin>>age;
    }
    void getdata2(){
        cout<<"Name:"<<name<<endl;
        cout<<"Persantage:";
        cin>>persantage;
    }
    void getdata3(){
        cout<<"Enter teacher name:";
        cin>>teachername;
        cout<<"Enter salary of teacher:";
        cin>>salary;
    }
    void printdata3(){
        cout<<"---------Teacher Details----------"<<endl;
        cout<<"Name:"<<teachername<<endl;
        cout<<"Salary:"<<salary<<endl;
    }

};
int main(){

    teacher obj;
    obj.getdata1();
    obj.getdata2();
    obj.getdata3();
    obj.printdata1();
    obj.printdata2();
    obj.printdata3();


    return 0;
}