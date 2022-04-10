#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,z=0;
	cin>>n;
	int arr[n],num[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	for(int i=0;i<n;i++)
	{
		for(int j=i;j<n;j++)
		{
			for(int k=i;k<j;k++){
				//num[z]=arr[k];
				//z++;
				cout<<arr[k]<<" ";
			}

			z=0;
		}
	}
}