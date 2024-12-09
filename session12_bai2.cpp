#include <stdio.h>

void array(int a[],int n){
	for(int i=0; i<n; i++){
		printf("%d ",a[i]);
	}
}
int main(){
	int nums[]={1,623,65,89,4,78,36,8};
	int n=sizeof(nums)/sizeof(int);
		array(nums,n);
return 0;
}

