#include<bits/stdc++.h>
using namespace std;
int main()
{

	int n;
	cout<<"Enter size of array";
	cin>>n;
	cout<<"Enter Array";
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	vector<int>b;
	for(int i=n;i>0;i--)
	{
		b.push_back(a[i-1]);
	}
	for(int i=0;i<b.size();i++)
	{
		cout<<b[i]<<" ";
	}
	return 0;
}