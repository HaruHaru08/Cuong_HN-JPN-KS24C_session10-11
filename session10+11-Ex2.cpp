#include<stdio.h>

int main(){
	int arr[5]={9,2,5,7,1};
	int size=sizeof(arr)/sizeof(int);
	printf("So truoc khi duoc sap xep la: \n");
	for(int i=0;i<size;i++){
		printf("%d\t",arr[i]);
	}
	for(int i=0;i<size-1;i++){
		for(int j=0;j<size-1-i;j++){
			if(arr[j]>arr[j+1]){
				int temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	printf("\nSo sau khi duoc sap xep la: \n");
	for(int i=0;i<size;i++){
		printf("%d\t",arr[i]);
	}
	return 0;
}