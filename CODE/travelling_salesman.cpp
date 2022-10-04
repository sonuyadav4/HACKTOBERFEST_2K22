#include<bits/stdc++.h>

using namespace std;
 
int array[10][10],completed[10],n,cost=0;
int least(int c);
 
void takeInput()
{
	int i,j;
	cout<<"Enter the number of villages: ";
	cin>>n;
 	cout<<"\nEnter the Cost Matrix\n";
 
	for(i=0;i<n;i++)
	{
		cout<<"\nEnter Elements of Row: "<<i+1<<endl;
 		for(j=0;j<n;j++)
			cin>>array[i][j];
 		completed[i]=0;
	}
	cout<<"\n\nThe cost list is:";
 
	for(i=0;i<n;i++)
	{
		cout<<endl;
 		for(j=0;j<n;j++)
			cout<<"\t"<<array[i][j];
	}
}
 
void mincost(int city)
{
	int i,ncity;
 	completed[city]=1;
 	cout<<city+1<<"--->";
	ncity=least(city);
 
	if(ncity==999)
	{
		ncity=0;
		cout<<ncity+1;
		cost+=array[city][ncity];
 		return;
	}
 	mincost(ncity);
}
 
int least(int c)
{
	int i,nc=999;
	int min=999,kmin;
 
	for(i=0;i<n;i++)
	{
		if((array[c][i]!=0) && (completed[i]==0))
		if(array[c][i]+array[i][c] < min)
		{
			min=array[i][0]+array[c][i];
			kmin=array[c][i];
			nc=i;
		}
	}
 	if(min!=999)
	cost+=kmin;
	return nc;
}
 
int main()
{
	takeInput();
 	cout<<"\n\nThe Path is:\n";
	mincost(0); //passing 0 Since its the starting vertex

	cout<<"\n\nMinimum cost is "<<cost<<endl;
	return 0;
}
