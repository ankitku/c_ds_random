#include<iostream>
#include "tree.h"
using namespace std;
int main()
{

Tree* t;

t = createsampletree();
t->printinorder();
cout<<"\n";

cout<<"height of this tree = "<<t->height()<<"\n";
cout<<"diameter of this tree = "<<t->diameter()<<"\n";

return 1;
}
