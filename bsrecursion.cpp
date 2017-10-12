#include <iostream>
using namespace std;
int binary_s(int arr[],int l,int u,int k)
{
	int mid=(l+u)/2;
	if(u>=l)
	{
		if(k>arr[mid])
			return binary_s(arr,mid+1,u,k);
		else if (k<arr[mid])
			return binary_s(arr,l,mid-1,k);
		else
			return 1;
	}
	else
		return 0;
}
int main()
{
	int arr[5];
	for (int i = 0; i < 5; ++i)
	{
		cin>>arr[i];
	}
	bool b=binary_s(arr,0,4,10);
	cout<<b<<endl;
}