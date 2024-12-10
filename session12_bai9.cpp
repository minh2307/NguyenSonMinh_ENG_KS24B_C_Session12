#include <stdio.h>
#include <math.h>

void addAllItem(int a[100][100],int n,int m){
	for(int i=0; i<n;i++){
		for(int j=0; j<m;j++){
			printf("nhap gia tri cua a[%d][%d]= ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
}
void showItem(int a[100][100],int n,int m){
	for(int i=0; i<n;i++){
		for(int j=0; j<m;j++){
			printf(" a[%d][%d]= %d",i,j,a[i][j]);
		}
		printf("\n");
	}
}
void corner(int a[100][100],int n, int m){
	printf("cac phan tu nam o goc:\n");
    printf("goc tren ben trai: %d", a[0][0]);
    printf("goc tren ben phai: %d\n", a[0][n-1]);
    printf("goc duoi ben trai: %d", a[m-1][0]);
    printf("goc duoi ben phai: %d\n", a[m-1][n-1]);
}
void Diagonals(int a[100][100],int n,int m){
	for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (i == 0 || i == m-1 || j == 0 || j == n-1) {
                printf("%d", a[i][j]);
            } else {
                printf("    ");
            }
        }
        printf("\n");
    }
}
void Primes(int a[100][100], int n, int m) {
    printf("cac phan tu la so nguyen to la:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            int num = a[i][j];
            int isPrime = 1; 
            if (num < 2) isPrime = 0; 
            	for (int k = 2; k <= sqrt(num); k++) {
                	if (num % k == 0) {
                    	isPrime = 0; 
                    break;
                	}
            	}
            if (isPrime) {
                printf("%d", num);
            } 
    	}
	}
}
void main_diagonal(int a[100][100],int n,int m){
		printf("duong cheo chinh cua mang la : ");
	for (int i = 0; i < n; i++) {
	    for (int j = 0; j < m; j++) {
	        if (i == j ) {
	        	printf("%d", a[i][j]);
	    	}
	    }		
	}	
}
void secondary_diagonal(int a[100][100],int n,int m){
		printf("duong cheo phu cua mang la : ");
	for (int i = 0; i < n; i++) {
	    for (int j = 0; j < m; j++) {
	        if (j == n - i - 1) {
	        	printf("%d", a[i][j]);
	    	}
	    }		
	}
}
int main(){
	int a[100][100];
	int choice,n,m;
	do{
		printf("               MENU\n");
		printf("1.nhap gia tri cac phan tu cau mang\n");
		printf("2.in gia tri cac phan tu cua mang theo ma tran\n");
		printf("3.in ra cac phan tu o goc theo ma tran\n");
		printf("4.in ra cac phan tu nam tren duong bien trong ma tran\n");
		printf("5.in ra cac phan tu nam tren duong cheo chinh va duong cheo phu theo ma tran\n");
		printf("6.in ra cac phan tu la so nguyen to theo ma tran");
		printf("7.thoat");
		printf("moi ban nhap lua chon cua minh: ");
		scanf("%d",&choice);
	switch(choice){
		case 1: 
			printf("nhap so hang cua mang: ");
			scanf("%d",&n);
			printf("nhap so cot cua mang: ");
			scanf("%d",&m);
			addAllItem(a,n,m);
		break;
		
		case 2:
			showItem(a,n,m);
		break;
		
		case 3:
			corner(a,n,m);
		break;
		
		case 4:
			Diagonals(a,n,m);
		break;
		
		case  5:
			main_diagonal(a,n,m);
			printf("\n");
			secondary_diagonal(a,n,m);
		break;
		
		case 6:
			Primes(a,n,m);
		break;
		
		default:
			printf("Lua chon khong hop le.\n"); 
	}
	
	}while(choice!=	7);



return 0;
}

