#include <iostream>
#include <string>
using namespace std;

class cricket
{
public:
    string name;
    int totalrun, bestper, mathes;
    float avgrun;
    void display()
    {
        cout<<"|---------Performance Card----------|"<<endl;
        cout <<"Name:"<< name << endl;
        cout <<"Total Runs:"<< totalrun << endl;
        avgrun = totalrun / mathes;
        cout <<"Avg.Runs:"<< avgrun << endl;
        cout <<"Best Score:"<< bestper << endl;
    }
};
class batsman : public cricket
{
public:
    void getdata()
    {
        cout << "Enter batsman name:";
        cin >> name;
        cout << "Enter total runs:";
        cin >> totalrun;
        cout << "Enter batsman best performance:";
        cin >> bestper;
        cout << "Enter total matchs played by player:";
        cin >> mathes;
    }
};
int main()
{
    batsman obj;
    obj.getdata();
    obj.display();

    return 0;
}