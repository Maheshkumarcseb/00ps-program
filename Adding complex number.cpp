#include<iostream>
using namespace std;
class complex
{
double r,i;
public:
void input();
void display();
friend complex add(complex ob1,complex ob2);
};
void complex::input()
{
cout<<"enter the real part\n";
cin>>r;
cout<<"enter the imaginary part\n";
cin>>i;
}
void complex::display()
{
cout<<r;
if(i<0)
  cout<<i<<"i";
else
  cout<<"+"<<i<<"i";
}
complex add(complex ob1,complex ob2);
{
complex temp;
temp.r=ob1.r+ob2.r;
temp.i=ob1.i+ob2.i;
return temp;
}
int main()
{
complex x;
x.input();
complex y;
y.input();
complex z;
z=add(x,y);
cout<<"x=";
x.display();
cout<<"y=";
y.display();
cout<<"x+y=";
z.display();
return 0;
}
