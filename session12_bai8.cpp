#include <stdio.h>
#include <math.h>

int ucln(int a, int b){
   	if(a == 0 || b == 0){
      	return a + b;
   	}
   	int min = a < b ? a : b;
   	for(int i = min; i >= 1; i--){
      	if(a % i == 0 && b % i == 0){
        return i;
      	}
   	}
   	return 1;
}

int main(){
	int num1,num2;
		printf("nhap vao so thu nhat: ");
		scanf("%d",&num1);
		printf("nhap vao so thu hai: ");
		scanf("%d",&num2);
	   	printf("UCLN(%d,%d)=%d",num1,num2, ucln(28, 20));
   	return 0;
}
