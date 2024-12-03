#include<stdio.h>

int main(){
	int arr[]={1,5,2,7,3,4,2,9};
	int size=sizeof(arr)/sizeof(arr[0]);
	int number,count=0;
	int addlndex[size];
	printf("Nhap so can tim: ");
	scanf("%d",&number);
	for(int i=0;i<size;i++){
		if(arr[i]==number){
			addlndex[count]=i;
			count++;
		}
	}
	if(count>0){
		printf("So can tim nam o cac vi tri: ");
		for(int i=0;i<count;i++){
			printf("%d\t",addlndex[i]);
		}
	}else{
		printf("So can tim khong nam trong mang");
	}
	return 0;
}