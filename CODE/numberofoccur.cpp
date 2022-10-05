#include<bits/stdc++.h>
using namespace std;
 
int numberofoccur(int arr[], int n, int x)
{
    int count = 0;
    for (int i=0; i<n; i++)
        if (x == arr[i])
          count++;
    return count;
}
 
int main()
{
    int arr[] = {1,3,4,3,2,4,5,6,7,5,3,4,5,6,7,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    int x;
    for(int i;i<n;i++)
    {
    	cout<<arr[i];
    	if(i!=n-1)
    		cout<<", ";
	}
	cout<<"\nEnter number to find occurence:- ";
	cin>>x;
    cout << numberofoccur(arr, n, x);
    return 0;
}
