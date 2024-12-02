#include<stdio.h>

int main(){
	int arr[5]={1,4,6,9,11};
	int searchValue;
	printf("Nhap so can tim: ");
	scanf("%d",&searchValue);
	int size=sizeof(arr)/sizeof(int);
	int flag=-1;
	for(int i=0;i<size;i++){
		if(arr[i]==searchValue){
			flag=i;
			break;
		}
	}
	if(flag==-1){
		printf("So can tim khong co trong mang.");
		return 1;
	}
	printf("So can tim nam o vi tri thu %d trong mang.",flag+1);
	return 0;
}