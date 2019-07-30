#include<bits/stdc++.h>

using namespace std;

int main()
{
	int i,j;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5-i;j++)
		{
			cout<<" ";
		}
		for(int k=1;k<=i;k++)
		{
			cout<<k<<" ";
		}
		cout<<endl;
	}
	return 0;
}