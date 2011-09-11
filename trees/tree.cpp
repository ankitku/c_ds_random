#include<iostream>
#include "tree.h"
using namespace std;
Tree::Tree(int val, Tree * lbranch, Tree * rbranch) : info(val), left(lbranch), right(rbranch)
{ }


void Tree::printinorder()
{
if(left != 0)
left->printinorder();
cout<<info<<" ";
if(right != 0)
right->printinorder();
}

	
Tree* createsampletree()
{

	Tree* t1 = new Tree(1,0,0);
	Tree* t2 = new Tree(2,0,0);
	Tree* t3 = new Tree(3,0,0);
	Tree* t4 = new Tree(4,0,0);
	Tree* t5 = new Tree(5,0,0);
	Tree* t6 = new Tree(6,t1,t2);
	Tree* t7 = new Tree(7,t4,0);
	Tree* t8 = new Tree(8,t3,t7);
	Tree* t9 = new Tree(9,0,t5);
	Tree* t10 = new Tree(10,t6,t8);
	Tree* t11 = new Tree(11,t10,t9);

	Tree* ta = new Tree(20,0,0);
	Tree* tb = new Tree(30,0,ta);
	Tree* tc = new Tree(40,t11,tb);

return tc;
}

int maxi(int a,int b)
{
return (a>=b)?a:b;
}

int Tree::diameter()
// post: return diameter of t
{
    if (this == 0) return 0;

    int lheight = left->height();
    int rheight = right->height();

    int ldiameter = left->diameter();
    int rdiameter = right->diameter();
    return maxi(lheight + rheight + 2,
	       maxi(ldiameter,rdiameter));
}

    int Tree::height()
    // postcondition: returns height of tree with root t
    {
        if (this == 0)
        {
            return -1;
        }
        else
        {
            return 1 + maxi(left->height(),right->height());
        }
    }
