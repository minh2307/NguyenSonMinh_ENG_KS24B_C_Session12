#include <stdio.h>

void array(int a[2][2],int n,int m){
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			printf("moi ban nhap vao phan tu a[%d][%d]: ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
}
void printf(int a[2][2],int n,int m){
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			printf("a[%d][%d]= %d\n ",i,j,a[i][j]);
			
		}
	}
}
int main(){
	int a[2][2];
	array(a	,2,2);
	printf(a,2,2);



return 0;
}

