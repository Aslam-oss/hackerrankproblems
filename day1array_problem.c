#include<stdio.h>
int main()
{
	int arr[100000];
	int i,n,d,j,first;
	scanf("%d",&n);
	scanf("%d",&d);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Before rotation : \n");
	for(i=0;i<n;i++)
	{
	printf("%d\t",arr[i]);
	}
	printf("\n");
	
	
	for(i=0;i<d;i++)
	{
		first=arr[0];
		for(j=0;j<n-1;j++)
		{
		arr[j]=arr[j+1];
		}
		arr[n-1]=first;
	}
printf("After rotation : \n");
for(i=0;i<n;i++)
{
printf("%d\t",arr[i]);
}
printf("\n");	
return 0;
}
