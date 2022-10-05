#include<stdio.h>
int main()
{
int arr[10];
int i;
printf("Enter 10 Numbers:-\n");
for(i=0;i<10;i++)
scanf("%d",&arr[i]);
int min=arr[0],max=arr[0];
for(i=1;i<10;i++)
{
if(arr[i]>max)
max=arr[i];
if(arr[i]<min)
min=arr[i];
}
printf("\nLargest Number:%d",max);
printf("\nSmallest Number:%d",min);
return 0;
}
