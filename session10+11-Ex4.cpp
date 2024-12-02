#include<stdio.h>

int main(){
		int arr[5]={49,24,14,34,4};
	int size=sizeof(arr)/sizeof(int);
		printf("In ra mang truoc khi sap xep: \n");
		for(int i=0;i<size;i++){
		printf("%d\t",arr[i]);
	}
	printf("\n");
	for(int i=0;i<size-1;i++){
		int minArr=i;
		for(int j=i+1;j<size;j++){
				if(arr[minArr]>arr[j]){
					minArr=j;
				}
			}
				int temp=arr[minArr];
					arr[minArr]=arr[i];
					arr[i]=temp;	
		}
	printf("In ra mang sau khi sap xep: \n");
		for(int i=0;i<size;i++){
		printf("%d\t",arr[i]);
	}
	return 0;
}