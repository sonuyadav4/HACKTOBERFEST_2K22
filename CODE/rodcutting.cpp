#include<bits/stdc++.h>

int max(int a,int b)
{
	if(a>b)
		return a;
	else 
		return b;
}

int main()
{
	int length[11]={0,1,2,3,4,5,6,7,8,9,10};
	int price[11]={0,1,5,8,9,10,17,17,20,24,30};
	int rev[11];
	rev[0]=0;
	int s1[11],s2[11];
	s1[0]=0;
	s2[0]=0;
	int i,j,q,prev;
	for(j=1;j<11;j++)
	{
		q=INT_MIN;
		prev=INT_MIN;
		for(i=1;i<=j;i++)
		{
			q=max(q,price[i]+rev[j-i]);
			if(q<prev)
			{
				s1[j] = i;
				s2[j] = j-i;
			}
			prev = q;
		}
		rev[j] = q;
		printf("%d + %d = rev[%d] -> %d\n",s1[j],s2[j],j,rev[j]);
	}
	for(i=1;i<=10;i++)
	{
		printf("%d ",rev[i]);
	}
}
