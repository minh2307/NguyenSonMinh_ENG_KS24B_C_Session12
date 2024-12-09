#include <stdio.h>

int factorial(int n){
	int result=1;
		for(int i=1; i<=n; i++){
			result *= i;
		}
		printf("giai thua cua %d la: %d",n,result);
return result;
}


int main(){
	int n;
		printf("moi ban nhap vao so nguyen bat ky: ");
		scanf("%d",&n);
		factorial(n);


return 0;
}

