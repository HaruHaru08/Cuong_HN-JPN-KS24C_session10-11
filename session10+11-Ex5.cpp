#include<stdio.h>

int main(){
	int arr[]={23,14,67,1,45};
	int size=sizeof(arr)/sizeof(arr[0]);
	int check=0;
	printf("Mang truoc khi sap xep la: \n");
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
	printf("\nMang sau khi duoc sap xep la: \n");
	for(int i=0;i<size;i++){
		printf("%d\t",arr[i]);
	}
	int number,mind,start=0;
	printf("\nNhap so can tim: ");
	scanf("%d",&number);
	while(start<=size){
		mind=(start + size)/2;
		if(arr[mind]==number){
			check=mind;
			break;
		}else if(arr[mind]<number){
			start=mind+1;
		}else{
			size=mind-1;
		}
	}
	if(check!=0){
		printf("So can tim o vi tri thu %d cua mang. ",check);
	}else{
		printf("So can tim khong nam trong mang");
	}
	return 0;
}