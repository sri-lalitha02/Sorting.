// Insertion sort
#include<stdio.h>
// Helper function to print array elements
void print_array(int *arr,int n)
{
	for(int i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
}
// Insertion sort function to sort array elements
void Insertion_sort(int *arr,int n)
{
	for(int i=1;i<n;i++)
	{
		int j=(i-1),key=arr[i];
		while(j>=0&&arr[j]>key) // always swap based on comparision of current element to previous index element
		{
			arr[j+1]=arr[j];
			j--;
		}
		arr[j+1]=key;
	}
}
int main()
{
	int n;
	printf("Enter Size of array: ");
	scanf("%d",&n);
	int arr[n];
	printf("Enter array elements : ");
	for(int i=0;i<n;i++) scanf("%d",&arr[i]);
	printf("Before Sorting : \n");
	print_array(arr,n);
	Insertion_sort(arr , n);
	printf("After Sorting : \n");
	print_array(arr , n);
}
// Time complexity --> O(n) {best} , O(n^2) {Average , wrost }
//Space complexity ---> O(1)
