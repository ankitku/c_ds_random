#include<stdio.h>
int bst[500] = {0};
const int top = 1;

void push(const int n,int i)
{
if(bst[1]==0)
{bst[1]=n;
return;
}
while(1)
	{
	if(n<=bst[i] && bst[i]!=0)
	i*=2;
	else
	if(n>bst[i] && bst[i]!=0)
	i=2*i+1;
	else
	break;
	}
bst[i] = n;
}

void printsorted(int i)
{
if(bst[i]==0) return;
printsorted(2*i);
printf("%d ",bst[i]);
printsorted(2*i+1);
}

void print()
{
int i=0;
while(++i<50)
printf("%d ",bst[i]);
}

int main()
{
int n;
while(scanf("%d",&n) && n!=0)
push(n,1);
print();
printf("\n");
printsorted(1);
}
