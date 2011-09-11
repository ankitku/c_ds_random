#include<iostream>
#include<string.h>
using namespace std;

class pstring
{
 char* str;
 int s;
 public:

  pstring(char* ptr="")
{
 cout<<"\n constructor called!";
 s=strlen(ptr);
 str=new char[s+1];
 strcpy(str,ptr);
}

pstring& operator+ (const pstring& right) 
{cout<<"\n + operator called!!";
 s+=strlen(right);
 char* p= str;
 str = new char[++s];
 strcpy(str,p);
 delete [] p;
 p=str;
 while(p++);
 p--;
 strcpy(p,right);
 return *this;
}

pstring& operator= ( const pstring& right)
{cout<<"\n = operator called!!";
 if(this!=&right)
	{
	 delete [] str;
	 s=strlen(right.str)+1;
	 str = new char[s];
	 strcpy(str,right.str);
	}
 return *this;
}

//  operator int () const
//{ cout<<"int conversion constructor called!!!\n";
 // return s;}

 operator char* () const
{
 cout<<"char* conversion operator called!!!!\n";
 return str;}
};


int main()
{
	pstring a("cow"),b("buffallo");
	pstring c;
	c=a+b+"hi";
	cout<<c;
}
