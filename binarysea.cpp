//wap to implement binary search
#include<stdio.h>
#define n 10
int main(){
	int arr[n],i,key,low=0,high=n-1,mid;
	printf("Enter ten number in ascending order\n");
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	printf("Enter a number : ");
	scanf("%d",&key);
	for(i=low;i<=high;i++){
		mid=(low+high)/2;
		if(key==arr[mid]){
			
			printf("Element found at position : %d",mid+1);
			return 0;
		}
		else if(key<arr[mid]){
			high=mid-1;
		}
		else{
			low=mid+1;
		}
	}
	printf("Number not found");
}
