#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include <iostream>
using  namespace std;
int main()
{
	int a[100];
	int n;
	cout<<"nhap n: "<<endl;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cout<<"nhap mang a["<<i<<"]: ";
		cin>>a[i];
	}
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<endl;
	}
	int x;
	cout<<"nhap x: "<<endl;
	cin>>x;
	for(int i=0;i<n;i++)
	{
		if(x==a[i]) x=i;
	}
	cout<<x;	
	return 0;	
}
