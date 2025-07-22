//Merge sort
#include<stdio.h>
void merge(int a[],int start,int mid,int end){
	int i=start;  //first part begin
	int j=mid+1;  //second part begin
	int b[end-start+1];
	int k=0;
	while(i<=mid && j<=end){
		if(a[i]<=a[j]){
			b[k++]=a[i++];
		}
		else{
			b[k++]=a[j++];
		}
	}
	while(i <=mid)  b[k++]=a[i++];
	while(j <=end)  b[k++]=a[j++];
	for(i=start,k=0;i<=end;i++,k++){
		a[i]=b[k];
	}
}
void mergesort(int a[],int n,int left,int right){
	if(left<right) 
	{
	int mid=(left+right)/2;
	mergesort(a,n,left,mid);
	mergesort(a,n,mid+1,right);
	merge(a,left,mid,right);
   }
}
int main(){
	int n;
	printf("Enter Size of array : ");
	scanf("%d",&n);
	int arr[n];
	printf("Enter array Elements : ");
	for(int i=0;i<n;i++) scanf("%d",&arr[i]);
	printf("Before sorting\n");
	for(int i=0;i<n;i++) printf("%d ",arr[i]);
	mergesort(arr,n,0,n-1);
	printf("\nAfter Sorting\n");
	for(int i=0;i<n;i++) printf("%d ",arr[i]);
}

// Time complexity -->  O(nlogn) {Best , Average , wrost }
//Space complexity ---> O(n)
