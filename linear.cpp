//Linear Search Algo
#include<stdio.h>
int main(){
	int a[5],i,key;
	printf("Enter five element\n");
	for(i=0;i<5;i++){
		scanf("%d",&a[i]);
	}
	printf("Enter a number : ");
	scanf("%d",&key);
	for(i=0;i<5;i++){
		if(a[i]==key){
			printf("Number is found at loc: %d\n",i+1);
			return 0;
		}
	}
}
