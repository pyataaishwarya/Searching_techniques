#include<stdio.h>
int searching(int a[] ,int ,int );
int main()
{
	int arr[10],n,i,a,search;
	printf("enter array size\n");
	scanf("%d",&n);
	printf("enter element to search\n");
	scanf("%d",&search);
	printf("enter array elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	a=searching(arr,n,search);
	if(a==1)
		printf("element %d found\n",search);
	else
		printf("element %d not found\n",search);
}
int searching(int arr[],int n,int search)
{
	int i;
	for(i=0;i<n;i++)
	{
		if(arr[i]==search)
			return 1;
	}
	return 0;
}



