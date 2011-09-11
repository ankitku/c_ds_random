#include<stdio.h>

void swap(int* p,int* q)
{
*p = *p+*q;
*q = *p - *q;
*p = *p - *q;
}


int main()
{
int arr[100] = {0};
int n=1,i=0,p,t;

while(1)
{ 
scanf("%d",&p);
if(p==-1)
break;
else
arr[n++] = p;
}

for(i=1;i<n;i++)
printf("%d ",arr[i]);

for(i=1;i<n;i++)
{
int k = i;
while((arr[k]<arr[k/2]) && k>=1)
{
p = arr[k];
arr[k] = arr[k/2];
arr[k/2] = p;
k/=2;
}
}

printf("heap in the array\n");

for(i=1;i<n;i++)
printf("%d ",arr[i]);

printf("taken out sorted\n");
arr[0] = -99;
for(i=1;i<n;i++)
{
printf("\n%d",arr[1]);
swap(arr+1,arr+n-i);
p=1;
while(p<(n-i)/2)
{
if((arr[2*p]>arr[2*p+1])&&(arr[p]>arr[2*p+1]))
{
swap(arr+p,arr+2*p+1);
p=2*p+1;
}
else if((arr[2*p+1]>=arr[2*p])&&(arr[p]>arr[2*p]))
{
swap(arr+p,arr+2*p);
p = 2*p;
}
else break;
}
}
printf("\n\n");
for(i=0;i<100;i++)
printf("%d ",arr[i]);

}
