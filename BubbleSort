//Bubble sort
#include<stdio.h>
void bubble_sort(int a[],int i,int j,int n)
{
	if(i>=n) return;//base case
	if(j>=n) return;//base case
	if(j<(n-1)&&a[j]>a[j+1])//swapping for sorting
	{
		int temp=a[j];
		a[j]=a[j+1];
		a[j+1]=temp;
	}
	

	bubble_sort(a,i+1,0,n);
	bubble_sort(a,i,j+1,n);
}
int main()
{
	int n;
	printf("Enter Size of array : ");
	scanf("%d",&n);
	int arr[n];
	printf("Enter array Elements : ");
	for(int i=0;i<n;i++) scanf("%d",&arr[i]);
	printf("Before sorting\n");
	for(int i=0;i<n;i++) printf("%d ",arr[i]);
	int i=0;
	bubble_sort(arr,i,i+1,n);
	printf("\nAfter Sorting\n");
	for(int i=0;i<n;i++) printf("%d ",arr[i]);
	
}


// Time complexity -->O(n){best} , O(n^2) {Average,wrost}
// Space complexity --->O(1)
