#include<iostream>
using namespace std;

class memf
{
    public:
    int Number,number;
    int withdraw,deposite,changes,whch,totald;
    
    void enter()
    {
        cout<<"Account number = ";
        cin>>Number;
        if(Number==123)
        {
            number=10000;
            cout<<"NAME : RAJ SAVALIYA"<<endl;
            cout<<"ACCOUNT NUM: 123"<<endl;
            cout<<"ACCOUNT BALANCE: "<<number<<endl;
            cout<<"ACCOUNT TYPE: SAVINGS"<<endl;

        }
        else if(Number==456)
        {
            number=240000;
            cout<<"NAME : SAMARTH  SAVALIYA"<<endl;
            cout<<"ACCOUNT NUM: 456"<<endl;
            cout<<"ACCOUNT BALANCE: "<<number<<endl;
            cout<<"ACCOUNT TYPE: SAVINGS"<<endl;


        }
        else if(Number==789)
        {
            number=840000;
            cout<<"NAME : SARVESH VAISHNANI"<<endl;
            cout<<"ACCOUNT NUM: 789"<<endl;
            cout<<"ACCOUNT BALANCE: "<<number<<endl;
            cout<<"ACCOUNT TYPE: SAVINGS"<<endl;


        }
        else
        {
            cout<<"PLEASE ENTER A VALID ACCOUNT NUMBER (:";
        }
        cout<<"DO YOU WANT TO COMMIT CHANGES =1.YES 2.NO "<<endl;
        cin>>changes;
        if(changes==1)
        {
            cout<<"1.DEPOSITES"<<endl;
            cout<<"2.WITHDRAWAL"<<endl;
            cin>>whch;

            switch(whch)
            {
                case 1:
                {
                    cout<<"ENTER THE DEPOSITED AMOUNT : ";
                    cin>>deposite;
                    totald=deposite+number;
                    
                    cout<<"ACCOUNT BALANCE: "<<totald<<endl;
                    break;
                    
 
    
                }

                case 2:
                {
                    cout<<"ENTER THE WITHDRAW AMOUNT : ";
                    cin>>withdraw;
                    totald=number-withdraw;
                   
                    cout<<"ACCOUNT BALANCE: "<<totald<<endl;
                    break;

                
                }
                default:
                {
                    cout<<"THANK YOU";
                }

               
            }

        }
        else
        {
            cout<<"THANK YOU FOR CHOOSING US (:";
        }

    
    }
};
int main()
{
    memf obj;
    obj.enter();
}