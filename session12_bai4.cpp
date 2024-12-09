#include <stdio.h>

void max(int a[],int size){
	int max=a[0];
	for(int i=0; i<size; i++){
		if(a[i]>max){
			max = a[i];			
		}
	}
		printf("so lon nhat tron mang la: %d",max);
}
int main(){
	int nums[]={4,2,6,89,2,4,6,78};
	int size = sizeof(nums)/sizeof(int);
		max(nums,size);


return 0;
}

