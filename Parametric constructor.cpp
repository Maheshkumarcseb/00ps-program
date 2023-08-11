#include<iostream>
using namespace std;
class base1
{
protected:
int i;
public:
base1(int x)
{
i=x;
  cout<<"constructing base\n";
}
~base1()
{
cout<<"destructing base1\n";
}
};
class base2
{
protected:
int j;
public:
base2(int x)
{
j=x;
cout<<"constructing base2";
}
~base2()
{
cout<<"destructing base2\n";
}
};
class Derived: public base1, public base2
{
int k;
public:
Derived(int x, int y, int z):base1(y),base2(z)
{
k=x;
cout<<"constructing base\n";
}
~Derived()
{
cout<<"destructing Derived\n";
}
void show()
{
  cout<<i<<endl<<j<<endl<<k;
}
int main()
{
Derived ob(1,2,3);
ob.show();
return 0;
}
