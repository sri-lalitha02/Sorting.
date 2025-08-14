#include<stdio.h>
// Binary_search function iterative
int Binary_search(int* arr,int low,int high,int key)
{
	int mid;
	while(low<=high)
	{
		mid=(low+high)/2;
		if(arr[mid]==key) return 1;
		else if(key<arr[mid]) high=mid-1;
		else low=mid+1;
	}
	return 0;
}
int main()
{
	int n;
	printf("Enter size of array\n");
	scanf("%d",&n);
	printf("Enter The array elements\n");
	int arr[n];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	int key;
	printf("Enter Target value : ");
	scanf("%d",&key);
	int res=Binary_search(arr,0,n,key);
	if(res==1) printf("\ntarget value is found");
	else printf("\nTarger value Not found\n");
}
// Time Complexity --> O(logn)
// Space Complexity --->O(n)
