f,l=10000;
x(n)
{
if(n==0) return f;
if (x(n-1)>=l)
	return x(n-1)%l;
if (x(n-1)<l)
	return (x(n-1)&1)==0?2*x(n-1)+5:x(n-1)+3;
}
main(n)
{scanf("%*d");
while(~scanf("%d%d",&n,&f))
printf("%d\n",x(n));
}
