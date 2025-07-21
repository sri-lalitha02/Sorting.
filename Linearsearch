// Linear_search
#include<stdio.h>
void Linear_search(int* arr,int n,int key)
{
	int flage=0;
	for(int i=0;i<n;i++)
	{
		if(arr[i]==key)//key is found
		{
			flage=1;
			
			break;
		}
	}
	if(flage==1) printf("Element is Found\n");
	else printf("Element is not found\n");
}
int main()
{
	int n;
	printf("Enter Size of the array\n");
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Enter Target element\n");
	int key;
	scanf("%d",&key);
	Linear_search(arr,n,key);
}
// Time complexity ---> O(n)
// space complexity --->O(1)
