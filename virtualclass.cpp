#include<iostream.h>
using namespace std;
class base 
{
public:
int a;
};
class d1:virtual public base
{
public:
int b;
};
class d2:virtual public base
{
public:
int c;
};
class d3:public d1,public d2
{
public: 
int d;
};
int main()
{
d3 ob;
ob.a=10;
ob.b=20;
ob.c=30;
ob.d=ob.a+ob.b+ob.c;
cout<<ob.d;
return 0;
}
