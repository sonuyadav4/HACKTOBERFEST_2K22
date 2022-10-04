#include<iostream>
using namespace std;
void merge(int a[],int lb,int mid,int ub)
{
	int b[10],i=lb,j=mid+1,k=lb;
	while(i<=mid && j<=ub)
	{
		if(a[i]<=a[j])
		{	b[k]=a[i];
			i++;
		}
		else
		{
			b[k]=a[j];
			j++;
		}
		k++;
	}
	if(i>mid)
	{
		while(j<=ub)
		{
			b[k]=a[j];
			j++;
			k++;
		}
	}
	else
	{
		while(i<=mid)
		{
			b[k]=a[i];
			i++;
			k++;
		}
	}
	for(k=lb;k<=ub;k++)
		a[k]=b[k];}
		
void mergesort(int a[],int lb,int ub)
{
	
	int mid;
	if(lb<ub)
	{
		mid=(lb+ub)/2;
		mergesort(a,lb,mid);
		mergesort(a,mid+1,ub);
		merge(a,lb,mid,ub);
	}
}
int main()
{
	int mid,b[10],n,a[10];
	cout<<"no. of element\n";
	cin>>n;
	for(int i=0;i<n;i++)
	{	
		cout<<"Enter element["<<i+1<<"]:";
		cin>>a[i];
	}
	cout<<"after sorting";
	mergesort(a,0,n-1);
	for(int i=0;i<n;i++)
		cout<<a[i];
	return 0;
	}
