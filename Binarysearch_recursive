//binary search using recursive method
#include<stdio.h>
int Binary_search_rec(int *arr , int low , int high , int target)
{
	int mid ;
	if(low < high)
	{
		mid=(low+high)/2;
		if(arr[mid]==target) return 1;
		else if(arr[mid]>target) return Binary_search_rec(arr,low,mid-1,target);
		else if(arr[mid]<target) return Binary_search_rec(arr,mid+1,high,target);
	}
	return 0;	
}
int main()
{
	int n;
	printf("Enter Size of array\n");
	scanf("%d",&n);
	int arr[n];
	printf("Enter Array elements: \n");
	for(int i=0;i<n;i++) scanf("%d",&arr[i]);
	int target;
	printf("Enter Target value:");
	scanf("%d",&target);
	int res=Binary_search_rec(arr,0,n,target);
	if(res==1)
	{
		printf("The element is found\n");
	}
	else
	{
		printf("The element is not found\n");
	}
}

// Time complexity ---> O(log(n))
// space complexity ---> O(1)
