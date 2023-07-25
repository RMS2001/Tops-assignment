#include <iostream>
using namespace std;
class student
{
public:
    int rollnum;
    void getdata()
    {
        cout << "Enter the Roll Number:";
        cin >> rollnum;
    }
};
class test : public student
{
public:
    int maths, sci;
    void marks()
    {

        cout << "Enter the marks for maths:";
        cin >> maths;
        cout << "Enter the marks for Science:";
        cin >> sci;
    }
};
class result : public test
{
public:
    void printresult(){
    int totalmarks;
    totalmarks = maths + sci;
    cout<<"-------------Result--------------"<<endl;
    cout<<"Roll Number:"<<rollnum<<endl;
    cout<<"Obtained Marks"<<endl;
    cout<<"Maths:"<<maths<<endl;
    cout<<"Science:"<<sci<<endl;
    cout<<"Total Marks Out Of 200:"<<totalmarks<<endl;
    }
};
int main()
{
    result obj;
    obj.getdata();
    obj.marks();
    obj.printresult();
    return 0;
}