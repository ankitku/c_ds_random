#ifndef TREE_H
#define TREE_H
class Tree
    {
        int info;
        Tree * left,* right;
	public:
	Tree(int val, Tree * lbranch, Tree * rbranch);
	void printinorder();
	int diameter();
	int height();
    };

Tree* createsampletree();

int maxi(int,int);
#endif
