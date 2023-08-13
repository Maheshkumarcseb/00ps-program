#include <iostream>
using namespace std;
class A
{
    int x,y;
    public:
    void getdata(int a,int b)
    {
        x=a;
        y=b;
    }
    void display()
    {
        cout<<"x="<<x<<endl;
        cout<<"y="<<y<<endl;
    }
    friend A operator-(A ob);
};
A operator-(A ob)
{
    ob.x=-ob.x;
    ob.y=-ob.y;
    return ob;
}
int main()
{
    A ob,ob1;
    ob.getdata(22,-11);
    cout<<"before uniary minus\n";
    ob.display();
    ob1=-ob;
    cout<<"after uniary minus\n";
    ob1.display();
    return 0;
    }