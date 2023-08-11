#include<iostream>
using namespace std;
class myclass
{
int id;
public:
myclass()
{
cout<<"default condtructor";
}
myclass(int a)
{
id=a;
cout<<"parametrical constructor";
}
myclass (myclass &x)
{
cout<<"copy constructor\n";
id=x.id; 
}
void display()
{
  cout<<id;
}
};
int main()
{
myclass A(100);
myclass B(A);
myclass C=A;
myclass D;
D=A;
cout<<"\n id of A ";
A.display();
cout<<"\n id of B ";
B.display();
cout<<"\n id of c ";
C.display();
cout<<"\n id of D ";
D.display();
return 0;
}
