#include<stdio.h>

int main(){
	int arr[5]={9,2,5,7,1};
	int size=sizeof(arr)/sizeof(int);
	printf("So truoc khi duoc sap xep la: \n");
	for(int i=0;i<size;i++){
		printf("%d\t",arr[i]);
	}
	for(int i=1;i<size;i++){
		int key=arr[i];
		int j;
		for(j=i-1;j>=0&&arr[j]>key;j--){
			arr[j+1]=arr[j];
		}
		arr[j+1]=key;
		}
	printf("\nSo sau khi duoc sap xep la: \n");
	for(int i=0;i<size;i++){
		printf("%d\t",arr[i]);
	}
	return 0;
}