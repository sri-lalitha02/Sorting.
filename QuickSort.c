//Quick sort
#include<stdio.h>
int merge(int *arr,int start, int pivot ,int end)
{
	int key=arr[pivot];
	int s=start;
	int e=end;
	while(s<e)
	{
		while(arr[s]<=key) s++;
		while(arr[e]>key) e--;
		if(s<e)
		{
			int temp=arr[s];
			arr[s]=arr[e];
			arr[e]=temp;
		}
	}
	int temp=arr[pivot];
	arr[pivot]=arr[e];
	arr[e]=temp;
	return e;
}
void Quick_sort(int *arr  ,int low ,int high)
{
	if(low<high)
	{
		int pivot=low; // pivot 
		pivot=merge(arr,low,pivot,high); 
		Quick_sort(arr,low,pivot-1); 
		Quick_sort(arr,pivot+1,high);
	}
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
	Quick_sort(arr,0,n-1);
	printf("\nAfter Sorting\n");
	for(int i=0;i<n;i++) printf("%d ",arr[i]);
}


// Time complexity -->  O(nlogn) {Best , Average } , O(n^2) {wrost}
//Space complexity ---> O(logn)
