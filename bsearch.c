#include<stdio.h>
int binarysearch(int a[],int ,int ,int );
int main()
{
	int i,j,search,n,arr[20],temp,index,first,last;
	printf("enter array size\n");
	scanf("%d",&n);
	printf("enter array elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("enter element to search\n");
	scanf("%d",&search);
	for(i=0;i<n;i++)
	{
		for(j=1;j<n-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	first=0;
	last=n-1;
	index=binarysearch(arr,first,last,search);
	if(index==-1)
		printf("element %d not found\n",search);
	else
		printf("element %d found at %d index\n",search,index);
}
int binarysearch(int arr[],int first,int last,int search)
{
	int mid;
	if(first>last)
		return -1;
	mid=(first+last)/2;
	if(arr[mid]==search)
		return mid;
	else if(search>arr[mid])
		return binarysearch(arr,mid+1,last,search);
	else
		return binarysearch(arr,first,mid-1,search);
}


