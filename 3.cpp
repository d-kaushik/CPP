#include<bits/stdc++.h>

using namespace std;

int main()
{
	int i,j,k=0;
	for(int i=1;i<=7;i++)
	{
		for(int j=1;j<=i;j++)
		{
			cout<<j<<" ";
		}
		for(j=1;j<=7-i;j++)
		{
			cout<<" ";
		}
		for(j=1;j<=7-i;j++)
		{
			cout<<"   ";
		}
		for(int a=i;a>=1;a--)
		{
			cout<<a<<" ";
		}
		cout<<endl;
	}
	for(int i=1;i<=6;i++)
	{
		for(j=1;j<=7-i;j++)
		{
			cout<<j<<" ";
		}
		cout<<endl;
	}
	return 0;
}