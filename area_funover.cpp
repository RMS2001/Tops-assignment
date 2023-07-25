#include <iostream>
using namespace std;

class demo
{
public:
    int total;
    void area(int radius)
    {
        cout << "For Area Of Cirle" << endl;
        cout << "Enter the radius :";
        cin >> radius;
        total = 3.14 * radius * radius;
        cout << total << endl;
    }
    void area(int side, int side1)
    {
        cout << "For Area Of Square" << endl;
        cout << "Enter the side: ";
        cin >> side;
        side1 = side;
        total = side * side1;
        cout << total << endl;
    }
    void area(int length, int width, int totalarea)
    {
        cout << "For Area Of rectangle" << endl;
        cout << "Enter the length: ";
        cin >> length;
        cout << "Enter the width: ";
        cin >> width;
        totalarea = length * width;
        cout << totalarea << endl;
    }
    void area(int height, int base, int totala, int a)
    {
        cout << "For Area Of Triangle" << endl;
        cout << "Enter the height of Triangle : " << endl;
        cin >> height;
        cout << "Enter the bregth og Triangle :" << endl;
        cin >> base;
        a = 2;
        totala = height * base / a;
        cout << totala;
    }
};
int main()
{
    int r1, s, s1;
    // for area circle and square
    int len, wid, ta;
    // area of rectangle
    int h, b, to, two;
    demo obj;
    obj.area(r1);
    obj.area(s, s1);
    obj.area(len, wid, ta);
    obj.area(h, b, to, two);
}