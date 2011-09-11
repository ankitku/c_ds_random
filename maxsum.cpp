#include<iostream>
using namespace std;
int main()
{
	int arr[10],temp=0,max=0;
	cout<<"enter the sequence:";
	for(int i=0;i<10;i++)
	cin>>arr[i];

	for(int l=0;l<10;l++)
	{	
		for(int u=l; u<10;u++)
		{
			for(int x=l;x<=u;x++)
			{temp+=arr[x];
			 if(max<temp)
			 max=temp;
			}
			temp=0;
		}
	}
 cout<<max;
}


